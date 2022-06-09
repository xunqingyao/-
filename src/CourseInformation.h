/**
 * @author qingyao
 * @Date 2022-4-11 20:13
 * @coding utf-8
*/

#ifndef FINAL_WORK_COURSEINFORMATION_H
#define FINAL_WORK_COURSEINFORMATION_H

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "CourseTime.h"
#include "UserInfo.h"
#include <io.h>
#include "MyTime.h"
#include <windows.h>

using namespace std;
/**
 * 课程基础信息
 * 课程名称
 * 课程上课时间
 * 课程上课地点
 * 课程群
 * 考试时间
 * 考试地点
 */
class CourseInformation {
private:
    string courseName;
    CourseTime courseTime;
    string coursePlace;
    string courseGroup;
    CourseTime examinationTime;
    string examinationPlace;
    vector<int> section;
    string teacher;
public:
    CourseInformation();
    ~CourseInformation();
    void setCourseName(string courseName);
    void setCourseTime(CourseTime courseTime);
    void setCoursePlace(string coursePlace);
    void setCourseGroup(string courseGroup);
    void setExaminationTime(CourseTime examinationTime);
    void setExaminationPlace(string examinationPlace);
    void setSection(vector<int> section);
    void setTeacher(string teacherName);
    string getTeacher();
    string getCourseName();
    CourseTime* getCourseTime();
    string getCoursePlace();
    string getCourseGroup();
    CourseTime* getExaminationTime();
    string getExaminationPlace();
    vector<int> getSection();
    static void sectionToTime(vector<int> section, Time &starttime, Time &endtime);
    static int timeToSection(string time);

};

#endif //FINAL_WORK_COURSEINFORMATION_H
