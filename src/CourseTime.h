/**
 * @author qingyao
 * @Date 2022-4-11 21:22
 * @coding utf-8
*/

#ifndef FINAL_WORK_COURSETIME_H
#define FINAL_WORK_COURSETIME_H
#include <string>
#include <cstdio>
#include <iostream>
#include "allEnum.h"
#include "MyTime.h"

using namespace std;

class CourseTime {
private:
    string month;
    string date;
    Week weekday;
    Time startTime;
    Time endTime;
public:
    CourseTime();
    ~CourseTime();
    void setMonth(string month);
    void setDate(string date);
    void setStartTime(Time startTime);
    void setEndTime(Time endTime);
    void setWeekday(Week weekday);
    Week getweekday();
    string getMonth();
    string getDate();
    Time* getStartTime();
    Time* getEndTime();
    string toString();
};


#endif //FINAL_WORK_COURSETIME_H
