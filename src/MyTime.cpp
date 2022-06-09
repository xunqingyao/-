/**
 * @author qingyao
 * @Date 2022/4/20 16:47
 * @coding utf-8
*/

#include "MyTime.h"

string Time::tostring() {
    string res;
    res = to_string(this->hour) + ":" + to_string(this->minute);
    return res;
}

void Time::setHour(int hour) {
    this->hour = hour;
}

void Time::setMinute(int minute) {
    this->minute = minute;
}

int Time::getHour() {
    return this->hour;
}

int Time::getMinute() {
    return this->minute;
}
