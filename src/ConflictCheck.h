/**
 * @author qingyao
 * @Date 2022/4/22 17:00
 * @coding utf-8
*/

#ifndef FINAL_WORK_CONFLICTCHECK_H
#define FINAL_WORK_CONFLICTCHECK_H

#include "UserInfo.h"
#include "Cache.h"
#include "CourseInformation.h"
#include "CourseTime.h"
#include "AfterActivity.h"
#include "MyTime.h"
#include <iostream>
using namespace std;

class ConflictCheck {
public:
    static bool conflictCheck(Cache cache, CourseInformation *course, AfterActivity *activity,
                              vector<CourseInformation> &conflictcourse,vector<AfterActivity> &conflictactivity);

};
bool isEarly(Time a, Time b);


#endif //FINAL_WORK_CONFLICTCHECK_H
