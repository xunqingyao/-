/**
 * @author qingyao
 * @Date 2022/4/19 23:31
 * @coding utf-8
*/

#ifndef FINAL_WORK_CACHE_H
#define FINAL_WORK_CACHE_H

#include "UserInfo.h"
#include "CourseInformation.h"
#include "AfterActivity.h"
#include <cstdio>
#include <string>
#include <cstring>
#include <fstream>
#include <io.h>
using namespace std;
/**
 * 缓存机制，把课程表等时间表信息存到对象中，避免后续查找工作多次打开文件解析
 */
class Cache{
private :
    UserInfo user;
    vector<CourseInformation> cachecourse;
    vector<AfterActivity> cacheactivity;
public:
    void setUser(UserInfo user);
    void addCacheCourse(CourseInformation course);
    void addCacheActivity(AfterActivity activity);
    void readToCache(UserInfo user);
    UserInfo* getUser();
    vector<CourseInformation> getCacheCourse();
    vector<AfterActivity> getCacheActivity();
};

inline Cache *theCache;
#endif //FINAL_WORK_CACHE_H
