/**
 * @author qingyao
 * @Date 2022/4/19 23:31
 * @coding utf-8
*/

#include "Cache.h"



void Cache::setUser(UserInfo user) {
    this->user = user;
}

void Cache::addCacheCourse(CourseInformation course) {
    this->cachecourse.push_back(course);
}

void Cache::addCacheActivity(AfterActivity activity) {
    this->cacheactivity.push_back(activity);
}

void Cache::readToCache(UserInfo user) {
    CourseInformation *temp;
    AfterActivity *aa;
    string username = user.getUsername();
    string currurl = "..\\userinfo\\" + username + "\\courseactivity\\courseinfo\\curriculum.txt";
    string activityurl = "..\\userinfo\\" + username + "\\courseactivity\\activityinfo\\activityinfo.txt";
    fstream f (currurl, ios::in);
    string weekday = "Weekday";
    string section = "Section";
    string coursename = "CourseName";
    string place = "Place";
    string teacher = "Teacher";
    while(!f.eof()){
        string str;
        while(getline(f,str)){
            if(std::equal(str.begin(), str.end(), "{")){
                temp = new CourseInformation();
            }

            if(std::equal(str.begin(), str.end(), "}")){
                this->cachecourse.push_back(*temp);
                delete temp;
                break;
            }
            int loc = String::specialSignalLoc(str,':');
            string str1 = str.substr(loc + 1);
            if(strstr(str.c_str(),weekday.c_str())){
                Week inweekday = (Week)(atoi(str1.c_str()) - 1);
                temp->getCourseTime()->setWeekday(inweekday);
            }
            else if(strstr(str.c_str(),section.c_str())){
                vector<string> res = String::split(str1,',');
                Time starttime;
                Time endtime;
                vector<int> a;
                for(int i = 0; i < res.size(); i++){
                    a.push_back(atoi(res[i].c_str()));
                }
                CourseInformation::sectionToTime(a,starttime,endtime);
                temp->getCourseTime()->setStartTime(starttime);
                temp->getCourseTime()->setEndTime(endtime);
                temp->setSection(a);
            }
            else if(strstr(str.c_str(),coursename.c_str())){
                temp->setCourseName(str1);

            }
            else if(strstr(str.c_str(),place.c_str())){
                temp->setCoursePlace(str1);
            }
            else{
                temp->setTeacher(str1);
            }
        }
    }
    fstream ff(activityurl,ios::in);
    string activityname = "activityname";
    string month = "month";
    string date = "date";
    string starttime = "starttime";
    string endtime = "endtime";
    while(!ff.eof()){
        string str;
        while(getline(ff,str)){
            if(std::equal(str.begin(), str.end(), "{")){
                aa = new AfterActivity();
            }

            if(std::equal(str.begin(), str.end(), "}")){
                this->cacheactivity.push_back(*aa);
                delete aa;
                break;
            }
            int loc = String::specialSignalLoc(str,':');
            string str1 = str.substr(loc + 1);
            if(strstr(str.c_str(),activityname.c_str())){
                aa->setActivityName(str1);
            }
            else if(strstr(str.c_str(),month.c_str())){
                aa->setMonth(str1);
            }
            else if(strstr(str.c_str(),date.c_str())){
                aa->setDate(str1);
            }
            else if(strstr(str.c_str(),starttime.c_str())){
                vector<string> stime = String::split(str1,':');
                vector<int> st;
                for(int i = 0; i < stime.size(); i++){
                    st.push_back(atoi(stime[i].c_str()));
                }
                Time sti;
                sti.setHour(st[0]);
                sti.setMinute(st[1]);
                aa->setStartTime(sti);
            }
            else if(strstr(str.c_str(),endtime.c_str())){
                vector<string> stime = String::split(str1,':');
                vector<int> st;
                for(int i = 0; i < stime.size(); i++){
                    st.push_back(atoi(stime[i].c_str()));
                }
                Time sti;
                sti.setHour(st[0]);
                sti.setMinute(st[1]);
                aa->setEndTime(sti);
            }
            else{

            }
        }
    }
    f.close();
    ff.close();
}

UserInfo* Cache::getUser() {
    return &this->user;
}

vector<CourseInformation> Cache::getCacheCourse() {
    return this->cachecourse;
}

vector<AfterActivity> Cache::getCacheActivity() {
    return this->cacheactivity;
}



