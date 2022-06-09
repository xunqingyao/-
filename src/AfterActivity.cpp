/**
 * @author qingyao
 * @Date 2022/4/23 21:46
 * @coding utf-8
*/

#include "AfterActivity.h"
using namespace std;

void AfterActivity::setActivityName(string activityName) {
    this->activityName = activityName;
}

void AfterActivity::setMonth(string month) {
    this->month = month;
}

void AfterActivity::setDate(string date) {
    this->date = date;
}

void AfterActivity::setStartTime(Time starttime) {
    this->starttime = starttime;
}

void AfterActivity::setEndTime(Time endtime) {
    this->endtime = endtime;
}

void AfterActivity::setType(bool type) {
    this->type = type;
}

string AfterActivity::getActivityName() {
    return this->activityName;
}

string AfterActivity::getMonth() {
    return this->month;
}

string AfterActivity::getDate() {
    return this->date;
}

Time *AfterActivity::getStarttime() {
    return &(this->starttime);
}

Time *AfterActivity::getEndtime() {
    return &(this->endtime);
}

bool AfterActivity::getType() {
    return this->type;
}

void AfterActivity::setWeek(Week weekday) {
    this->weekday = weekday;
}

Week AfterActivity::getWeekday() {
    return this->weekday;
}


