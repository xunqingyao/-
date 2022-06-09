/**
 * @author qingyao
 * @Date 2022/4/20 16:29
 * @coding utf-8
*/


#include "Request.h"


string Request::init(UserInfo user, Cache *cache) {
    string localpath = "..\\userinfo\\"+user.getUsername()+"\\courseactivity\\courseinfo";
    string curriculumurl = localpath+"\\curriculum.txt";
    string examinationurl = localpath+"\\examination.txt";
    if(_access(localpath.c_str(),0) == -1){
        string command = "mkdir -p "+ localpath;
        system(command.c_str());
        fstream newr (curriculumurl,ios::out);
        newr.close();
        newr.open(examinationurl,ios::out);
        newr.close();
    }
    localpath = "..\\userinfo\\"+ user.getUsername() +"\\log";
    if(_access(localpath.c_str(),0) == -1){
        string command = "mkdir -p " + localpath;
        system(command.c_str());
        fstream newlog(localpath+"\\log.txt",ios::out);
        newlog.close();
        fstream newTime(localpath+"\\time.txt",ios::out);
        newTime << "00:00";
        newTime.close();
    }

    localpath = "..\\userinfo\\"+user.getUsername()+"\\courseactivity\\activityinfo";
    string activityurl = localpath+"\\activityinfo.txt";
    if(_access(localpath.c_str(),0) == -1){
        string command = "mkdir -p "+ localpath;
        system(command.c_str());
        fstream newr (activityurl,ios::out);
        newr.close();
    }
    cache->readToCache(user);
    localpath = "..\\userinfo\\"+ user.getUsername() +"\\log\\time.txt";
    ifstream readTime;
    readTime.open(localpath, ios::in);
    string time;
    readTime >> time;
    return time;
}


/**
 *  上传作业和课程资料
 * @param user 用户实例
 * @param url 需要上传文件的绝对路径，包括文件本身
 * @param filename 上传文件的名称（带文件格式）
 * @param coursename 课程名称
 * @param flag 是何种上传，0代表课程资料的上传，1代表课程作业的上传
 * @return 是否上传成功 false代表路径下存在相同名称的文件，1代表上传成功
 */
bool Request::postCourseInfo(UserInfo user, string url, string filename, string coursename,int flag){
    string localroot;
    string properites;
    if(flag == 0){
        localroot = "..\\userinfo\\"+user.getUsername()+"\\coursematerial\\"+coursename;
        properites = localroot+"\\allmaterialinfo.txt";
    }
    if(flag == 1){
        localroot = "..\\userinfo\\"+user.getUsername()+"\\homework\\"+coursename;
        properites = localroot+"\\allhomework.txt";
    }
    if(_access(localroot.c_str(),0) == -1){
        string command = "mkdir -p "+ localroot;
        system(command.c_str());
        fstream newr (properites,ios::out);
        newr.close();
    }
    fstream r (properites,ios::in);
    string str;
    while(!r.eof()) {
        getline(r, str);
        if(str == ""){
            continue;
        }
        int loc = str.find(':');
        string temp = str.substr(0, loc);
        if (std::equal(temp.begin(), temp.end(), filename.begin())) {
            return false;
        }
    }
    r.close();
    fstream w (properites,ios::app|ios::out);
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    string time = to_string(sys.wYear)+to_string(sys.wMonth)+to_string(sys.wDay)+to_string(sys.wHour)+to_string(sys.wMinute);
    w<<filename<<':'<<time << "\n";
    w.close();
    string doc = "copy " + url + ' '+localroot + "\\" +filename;

    QTextCodec *utf8 = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(utf8);
    QTextCodec* gbk = QTextCodec::codecForName("gbk");
    QString doc_un = utf8->toUnicode(QString::fromStdString(doc).toLocal8Bit().data());
    string doc_gbk = gbk->fromUnicode(doc_un).toStdString();
    system(doc_gbk.c_str());
   // WinExec(doc.c_str(),)
    return true;

}
/**
 * 建立用户对应课程表信息
 * @param user
 * @param course
 * @return 没啥用
 */
bool Request::postCurriculum(UserInfo &user, CourseInformation course, Cache &cache,
                             vector<CourseInformation> conflictcourse, vector<AfterActivity> conflictactivity) {
    string localpath = "..\\userinfo\\"+user.getUsername()+"\\courseactivity\\courseinfo";
    string curriculumurl = localpath+"\\curriculum.txt";
    bool flag = ConflictCheck::conflictCheck(cache, &course, nullptr, conflictcourse,conflictactivity);
    if(flag == true){
        return false;
    }
    fstream f(curriculumurl, ios::out|ios::app);
    int weekday = (int)course.getCourseTime()->getweekday() + 1;
    f << "{" <<endl;
    f << "Weekday" << ":" << to_string(weekday) << endl;
    f << "Section" << ":";
    for(int i = 0; i < course.getSection().size(); i++){
        f << course.getSection()[i];
        if(i != course.getSection().size() - 1){
            f << ",";
        }
    }
    f << endl;
    f << "CourseName" << ":" << course.getCourseName() <<endl;
    f << "Place" << ":" << course.getCoursePlace() << endl;
    f << "}" <<endl;
    f.close();
    cache.addCacheCourse(course);
    return true;
}

void Request::log(string msg) {
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    string time = to_string(sys.wYear)+to_string(sys.wMonth)+to_string(sys.wDay)
                  +to_string(sys.wHour)+to_string(sys.wMinute)+to_string(sys.wSecond);
    fstream f("..\\userinfo\\log\\log.txt",ios::out|ios::app);
    f<<time<<":"<<msg<<endl;

}

bool Request::postActivity(UserInfo user, AfterActivity activity, Cache &cache,
                           vector<CourseInformation> conflictcourse, vector<AfterActivity> conflictactivity) {
    string localpath = "..\\userinfo\\"+user.getUsername()+"\\courseactivity\\activityinfo";
    string activityurl = localpath+"\\activityinfo.txt";
    bool flag = ConflictCheck::conflictCheck(cache, nullptr, &activity, conflictcourse,conflictactivity);
    if(flag == true){
        return false;
    }
    fstream f (activityurl,ios::out|ios::app);
    int month = atoi(activity.getMonth().c_str());
    int date = atoi(activity.getDate().c_str());
    f << "{" << endl;
    f << "activityname:" << activity.getActivityName() <<endl;
    f << "month:" << to_string(month) << endl;
    f << "date:" << to_string(date) << endl;
    f << "starttime:" << to_string(activity.getStarttime()->getHour()) << ":"
                            << to_string(activity.getStarttime()->getMinute()) << endl;
    f << "endtime:" << to_string(activity.getEndtime()->getHour()) << ":"
                            << to_string(activity.getEndtime()->getMinute()) <<endl;
    f << "}" << endl;
    f.close();
    cache.addCacheActivity(activity);
    return true;

}

//bool Request::compressfile(UserInfo user, string url) {
////    char readpath[50];
////    printf("请输入BMP文件名（全英、不带文件类型后缀）:");
////    scanf("%s", readpath);
//    unsigned char ** data;				//老二维数组了
////    //读取文件信息
////    //char path1[]="";
////    //strcat(path1, readpath);
////    //strcat(path1, ".bmp");//文件名的拼接
//    string path1 = "";
//    path1 = url + ".bmp";
//    BMPHeader ih;
//    if (!Compress::ReadBMP(path1, ih, data)) {
//        return false;
//    }
//    //生成压缩后的哈夫曼文件
//    string path2="";
//    path2 = url + ".bmp.huf";
//    Compress::HuffmanEncode(data, ih.BI.biHeight, ih.BI.biWidth, path2.c_str());
//    return true;
//    printf("文件压缩成功.\n");
//}



