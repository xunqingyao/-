/**
 * @author qingyao
 * @Date 2022/4/20 16:41
 * @coding utf-8
*/

#ifndef FINAL_WORK_RESPONSE_H
#define FINAL_WORK_RESPONSE_H
#include <Windows.h>
#include "CourseInformation.h"
#include <string>
#include <iostream>
#include "Cache.h"

#include "AfterActivity.h"
#include "UserInfo.h"
class Response {
public:
    static vector<CourseInformation> searchCourse(UserInfo user, Cache cache, string coursename);
    static vector<AfterActivity> searchActivity(UserInfo user, Cache cache, string activityname);
    static vector<string> searchMaterial(UserInfo user, string coursename);//资料
    static vector<string> searchHomework(UserInfo user, string coursename);
    static string getProgress();//进度
    static vector<CourseInformation> searchByTimeOrPlace(UserInfo user, Cache cache, string msg);

};


#endif //FINAL_WORK_RESPONSE_H
