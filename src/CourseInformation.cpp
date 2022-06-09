/**
 * @author qingyao
 * @Date 2022/4/19 16:11
 * @coding utf-8
*/

#include "CourseInformation.h"

CourseInformation::CourseInformation() = default;

CourseInformation::~CourseInformation() = default;


void CourseInformation::setCourseName(string courseName) {
    this->courseName = std::move(courseName);
}

void CourseInformation::setCourseTime(CourseTime courseTime) {
    this->courseTime = std::move(courseTime);
}

void CourseInformation::setCoursePlace(string coursePlace) {
    this->coursePlace = std::move(coursePlace);
}

void CourseInformation::setCourseGroup(string courseGroup) {
    this->courseGroup = std::move(courseGroup);
}

void CourseInformation::setExaminationTime(CourseTime examinationTime) {
    this->examinationTime = std::move(examinationTime);
}

void CourseInformation::setExaminationPlace(string examinationPlace) {
    this->examinationPlace = std::move(examinationPlace);
}

void CourseInformation::setSection(vector<int> section) {
    this->section = section;
}

void CourseInformation::setTeacher(string teacherName)
{
    this->teacher = teacherName;
}

string CourseInformation::getTeacher()
{
    return teacher;
}

string CourseInformation::getCourseName() {
    return this->courseName;
}

CourseTime* CourseInformation::getCourseTime() {
    return &this->courseTime;
}

string CourseInformation::getCoursePlace() {
    return this->coursePlace;
}

string CourseInformation::getCourseGroup() {
    return this->courseGroup;
}

CourseTime* CourseInformation::getExaminationTime() {
    return &this->examinationTime;
}

string CourseInformation::getExaminationPlace() {
    return this->examinationPlace;
}

vector<int> CourseInformation::getSection() {
    return this->section;
}

void CourseInformation::sectionToTime(vector<int> section, Time &starttime, Time &endtime) {
    int s = section[0];
    int e = section.back();
    switch(s){
        case 1:
            starttime.setHour(8);
            starttime.setMinute(0);
            break;
        case 2:
            starttime.setHour(8);
            starttime.setMinute(50);
            break;
        case 3:
            starttime.setHour(9);
            starttime.setMinute(50);
            break;
        case 4:
            starttime.setHour(10);
            starttime.setMinute(40);
            break;
        case 5:
            starttime.setHour(11);
            starttime.setMinute(30);
            break;
        case 6:
            starttime.setHour(13);
            starttime.setMinute(0);
            break;
        case 7:
            starttime.setHour(13);
            starttime.setMinute(50);
            break;
        case 8:
            starttime.setHour(14);
            starttime.setMinute(45);
            break;
        case 9:
            starttime.setHour(15);
            starttime.setMinute(40);
            break;
        case 10:
            starttime.setHour(16);
            starttime.setMinute(35);
            break;
        case 11:
            starttime.setHour(17);
            starttime.setMinute(25);
            break;
        case 12:
            starttime.setHour(18);
            starttime.setMinute(30);
            break;
        case 13:
            starttime.setHour(19);
            starttime.setMinute(20);
            break;
        case 14:
            starttime.setHour(20);
            starttime.setMinute(10);
            break;
        default:
            break;
    }
    switch(e){
        case 1:
            endtime.setHour(8);
            endtime.setMinute(45);
            break;
        case 2:
            endtime.setHour(9);
            endtime.setMinute(35);
            break;
        case 3:
            endtime.setHour(10);
            endtime.setMinute(35);
            break;
        case 4:
            endtime.setHour(11);
            endtime.setMinute(30);
            break;
        case 5:
            endtime.setHour(12);
            endtime.setMinute(15);
            break;
        case 6:
            endtime.setHour(13);
            endtime.setMinute(45);
            break;
        case 7:
            endtime.setHour(14);
            endtime.setMinute(35);
            break;
        case 8:
            endtime.setHour(15);
            endtime.setMinute(30);
            break;
        case 9:
            endtime.setHour(16);
            endtime.setMinute(25);
            break;
        case 10:
            endtime.setHour(17);
            endtime.setMinute(20);
            break;
        case 11:
            endtime.setHour(18);
            endtime.setMinute(10);
            break;
        case 12:
            endtime.setHour(19);
            endtime.setMinute(15);
            break;
        case 13:
            endtime.setHour(20);
            endtime.setMinute(5);
            break;
        case 14:
            endtime.setHour(20);
            endtime.setMinute(55);
            break;
        default:
            break;
    }
}

int CourseInformation::timeToSection(string time){
    vector<string> hm = String::split(time, ':');
    int hour = atoi(hm[0].c_str());
    int minute = atoi(hm[0].c_str());
    int res = 0;
    if(hour < 8) return 1;
    if(hour >= 21) return 0;
    switch(hour){
        case 8:
            if(minute < 45) res = 1;
            else res = 2;
            break;
        case 9:
            if(minute < 35) res = 2;
            else res = 3;
            break;
        case 10:
            if(minute < 35) res = 3;
            else res = 4;
            break;
        case 11:
            if(minute < 25) res = 4;
            else res = 5;
            break;
        case 12:
            if(minute < 15) res = 5;
            else res = 6;
            break;
        case 13:
            if(minute < 45) res = 6;
            else res = 7;
            break;
        case 14:
            if(minute < 35) res = 7;
            else res = 8;
            break;
        case 15:
            if(minute < 30) res = 8;
            else res = 9;
            break;
        case 16:
            if(minute < 25) res = 9;
            else res = 10;
            break;
        case 17:
            if(minute < 20) res = 10;
            else res = 11;
            break;
        case 18:
            if(minute < 10) res = 11;
            else res = 12;
            break;
        case 19:
            if(minute  < 15) res = 12;
            else res = 13;
            break;
        case 20:
            if(minute < 5) res = 13;
            else res = 14;
            break;
        default:
            res = 0;
    }
    return res;
}
