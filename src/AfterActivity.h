/**
 * @author qingyao
 * @Date 2022/4/23 21:46
 * @coding utf-8
*/

#ifndef FINAL_WORK_AFTERACTIVITY_H
#define FINAL_WORK_AFTERACTIVITY_H

#include <iostream>
#include <string>
#include "allEnum.h"
#include "MyTime.h"
using namespace std;


/**
 * type 为true时为集体活动
 * type为false时为个人活动
 */
class AfterActivity {
private:
    string activityName;
    string month;
    string date;
    Week weekday;
    Time starttime;
    Time endtime;
    bool type;
public:
    void setActivityName(string activityName);
    void setMonth(string month);
    void setDate(string date);
    void setWeek(Week weekday);
    void setStartTime(Time starttime);
    void setEndTime(Time endtime);
    void setType(bool type);
    string getActivityName();
    string getMonth();
    string getDate();
    Time* getStarttime();
    Time* getEndtime();
    Week getWeekday();
    bool getType();
};


#endif //FINAL_WORK_AFTERACTIVITY_H
