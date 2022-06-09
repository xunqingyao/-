/**
 * @author qingyao
 * @Date 2022/4/19 16:16
 * @coding utf-8
*/

#include "CourseTime.h"
using namespace std;
void CourseTime::setMonth(string month) {
    this->month = month;
}

void CourseTime::setDate(string date) {
    this->date = date;
}

void CourseTime::setStartTime(Time startTime) {
    this->startTime = startTime;
}

void CourseTime::setEndTime(Time endTime) {
    this->endTime = endTime;
}

string CourseTime::getMonth() {
    return this->month;
}

string CourseTime::getDate() {
    return this->date;
}

Time* CourseTime::getStartTime() {
    return &this->startTime;
}

Time* CourseTime::getEndTime() {
    return &this->endTime;
}


string CourseTime::toString() {
    return this->month+this->date+"starttime : "+this->startTime.tostring()+"\n          endtime : "+this->endTime.tostring();
}

Week CourseTime::getweekday() {
    return this->weekday;
}

void CourseTime::setWeekday(Week weekday) {
    this->weekday = weekday;
}

CourseTime::~CourseTime(){};


CourseTime::CourseTime(){};
