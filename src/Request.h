/**
 * @author qingyao
 * @Date 2022/4/20 16:29
 * @coding utf-8
*/

#ifndef FINAL_WORK_REQUEST_H
#define FINAL_WORK_REQUEST_H
#include <Windows.h>
#include <string>
#include <QTextCodec>
#include "UserInfo.h"
#include "CourseInformation.h"
#include "Cache.h"
#include "AfterActivity.h"
#include "ConflictCheck.h"
#include "Compress.h"

#include <iostream>
#include <fstream>
#include<QTime>
#include <vector>

class Request {
public:
    static string init(UserInfo user, Cache *cache);
    static bool postCourseInfo(UserInfo user, string url,string filename,string coursename,int flag);
    static bool postCurriculum(UserInfo &user, CourseInformation course, Cache &cache,
                               vector<CourseInformation> conflictcourse, vector<AfterActivity> conflictactivity);
    static bool postActivity(UserInfo user, AfterActivity activity, Cache &cache,
                             vector<CourseInformation> conflictcourse, vector<AfterActivity> conflictactivity);
//    static bool compressfile(UserInfo user,string url);
    static void log(string msg);
};


#endif //FINAL_WORK_REQUEST_H
