/**
 * @author qingyao
 * @Date 2022/4/20 16:41
 * @coding utf-8
*/

#include "Response.h"

vector<CourseInformation> Response::searchCourse(UserInfo user, Cache cache, string coursename) {
    vector<CourseInformation> courses = cache.getCacheCourse();
    vector<CourseInformation> res;
    for(int i = 0; i < courses.size(); i++){
        if(strstr(courses[i].getCourseName().c_str(), coursename.c_str())){
            res.push_back(courses[i]);
        }
    }
    return res;
}

vector<AfterActivity> Response::searchActivity(UserInfo user, Cache cache, string activityname) {
    vector<AfterActivity> activitys = cache.getCacheActivity();
    vector<AfterActivity> res;
    for(int i = 0; i < activitys.size(); i++){
        if(strstr(activitys[i].getActivityName().c_str(),activityname.c_str())){
            res.push_back(activitys[i]);
        }
    }
    return res;
}

vector<string> Response::searchMaterial(UserInfo user, string coursename) {
    vector<string> res;
    fstream f("..\\userinfo\\"+user.getUsername()+"\\coursematerial\\" + coursename+"\\allmaterialinfo.txt",ios::in);
    string str;
    if(f.is_open()) {
        while (!f.eof()) {
            getline(f, str);
            int loc = String::specialSignalLoc(str, ':');
            string temp = str.substr(0, loc);
            if (std::equal(temp.begin(), temp.end(), "")||loc == -1) {
                continue;
            }
            res.push_back(temp);
        }
    }
    return res;

}

vector<string> Response::searchHomework(UserInfo user, string coursename) {
    vector<string> res;
    fstream f("..\\userinfo\\"+user.getUsername()+"\\homework\\" + coursename+"\\allhomework.txt",ios::in);
    string str;
    if(f.is_open()) {
        while (!f.eof()) {
            getline(f, str);
            int loc = String::specialSignalLoc(str, ':');
            string temp = str.substr(0, loc);
            if (std::equal(temp.begin(), temp.end(), "")||loc == -1) {
                continue;
            }
            res.push_back(temp);
        }
    }
    return res;

}

string Response::getProgress() {
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    string res;
    int date = sys.wDay;
    int month = sys.wMonth;
    int difmonth = month - 3;
    int alldate = 1;
    switch(difmonth){
        case 0:
            alldate += date;
            break;
        case 1:
            alldate += 31 + date;
            break;
        case 2:
            alldate += 31 + 30 + date;
            break;
        case 3:
            alldate += 31 + 30 + 31 + date;
            break;
        default:
            alldate = -1;
            break;
    }
    if(alldate / 7 > 16 || alldate == -1){
        res = "当前不在教学周内";
        return res;
    }
    int nowweek = alldate / 7 + 1;
    res = to_string(nowweek) + "/16";
    return res;

}

vector<CourseInformation> Response::searchByTimeOrPlace(UserInfo user, Cache cache, string msg) {
    vector<CourseInformation> courses = cache.getCacheCourse();
    vector<CourseInformation> res;
    for(CourseInformation course : courses){
        if(msg == course.getCoursePlace())
        {
            res.push_back(course);

        }
    }
    if(!res.empty() || !String::isHasSpecialSignal(msg,':')) return res;
    vector<string> s = String::split(msg,' ');
    string week = s[0];
    string time = s[1];
    char first = week.at(0);
    char second = week.at(1);
    Week weekday = Week::limit;
    switch(first){
        case 'M':
            weekday = Week::MONDAY;
            break;
        case 'T':
            if(second == 'U') weekday = Week::TUESDAY;
            else weekday = Week::THURSDAY;
            break;
        case 'W':
            weekday = Week::WEDNESDAY;
            break;
        case 'F':
            weekday = Week::FRIDAY;
            break;
        case 'S':
            if(second == 'A') weekday = Week::SATURDAY;
            else weekday = Week::SUNDAY;
            break;
        default:
            return res;
    }
    int section = CourseInformation::timeToSection(time);
    for(CourseInformation course : courses){
        if(course.getCourseTime()->getweekday() == weekday){
            if(course.getSection()[0] >= section){
                if(res.empty()){
                    res.push_back(course);
                }else{
                    if(res[0].getSection()[0] > course.getSection()[0]){
                        res.pop_back();
                        res.push_back(course);
                    }
                }
            }
        }
    }
    return res;
}

