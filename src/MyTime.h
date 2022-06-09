/**
 * @author qingyao
 * @Date 2022/4/20 16:47
 * @coding utf-8
*/

#ifndef FINAL_WORK_TIME_H
#define FINAL_WORK_TIME_H

#include <string>
#include <iostream>
using namespace std;

class Time{
private:
    int hour;
    int minute;
public:
    void setHour(int hour);
    void setMinute(int minute);
    int getHour();
    int getMinute();
    string tostring();
};

#endif //FINAL_WORK_TIME_H
