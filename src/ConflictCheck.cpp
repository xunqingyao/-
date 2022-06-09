/**
 * @author qingyao
 * @Date 2022/4/22 17:00
 * @coding utf-8
*/

#include "ConflictCheck.h"

bool ConflictCheck::conflictCheck(Cache cache, CourseInformation *course, AfterActivity *activity,
                                  vector<CourseInformation> &conflictcourse,vector<AfterActivity> &conflictactivity) {

    vector<CourseInformation> ci = cache.getCacheCourse();
    vector<AfterActivity> aa = cache.getCacheActivity();
    bool flag = false;

    if(course != nullptr) {
        CourseTime *ct = course->getCourseTime();

        for (int i = 0; i < ci.size(); i++) {

            CourseTime *section = ci[i].getCourseTime();

            if (section->getweekday() == ct->getweekday()) {

                if (isEarly(*(ct->getStartTime()), *(section->getStartTime()))
                    && (isEarly(*(section->getStartTime()), *(ct->getEndTime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                } else if (isEarly(*(ct->getStartTime()), *(section->getEndTime()))
                           && (isEarly(*(section->getEndTime()), *(ct->getEndTime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                } else if (isEarly(*(section->getStartTime()), *(ct->getStartTime()))
                           && (isEarly(*(ct->getEndTime()), *(section->getEndTime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                }
            }
        }
        for (int i = 0; i < aa.size(); i++){
            Time *st = aa[i].getStarttime();
            Time *et = aa[i].getEndtime();

            if(ct -> getweekday() == aa[i].getWeekday()){

                if (isEarly(*(ct->getStartTime()), *st)
                    && (isEarly(*st, *(ct->getEndTime())))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);


                } else if (isEarly(*(ct->getStartTime()), *et)
                           && (isEarly(*et, *(ct->getEndTime())))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);


                } else if (isEarly(*st, *(ct->getStartTime()))
                           && (isEarly(*(ct->getEndTime()), *et))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);


                }
            }
        }
    }
    if(activity != nullptr) {
        for (int i = 0; i < ci.size(); i++) {
            CourseTime *ct = ci[i].getCourseTime();
            if (ct->getweekday() == activity->getWeekday()) {

                if (isEarly(*(activity->getStarttime()), *(ct->getStartTime()))
                    && (isEarly(*(ct->getStartTime()), *(activity->getEndtime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                } else if (isEarly(*(activity->getStarttime()), *(ct->getEndTime()))
                           && (isEarly(*(ct->getEndTime()), *(activity->getEndtime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                } else if (isEarly(*(ct->getStartTime()), *(activity->getStarttime()))
                           && (isEarly(*(activity->getEndtime()), *(ct->getEndTime())))) {


                    flag = true;
                    conflictcourse.push_back(ci[i]);


                }
            }
        }
        for (int i = 0; i < aa.size(); i++) {
            Time *st = aa[i].getStarttime();
            Time *et = aa[i].getEndtime();

            if (atoi(aa[i].getMonth().c_str()) == atoi(activity->getMonth().c_str())
                && atoi(aa[i].getDate().c_str()) == atoi(activity->getDate().c_str())) {

                if (isEarly(*(activity->getStarttime()), *(aa[i].getStarttime()))
                    && (isEarly(*(aa[i].getStarttime()), *(activity->getEndtime())))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);


                } else if (isEarly(*(activity->getStarttime()), *(aa[i].getEndtime()))
                           && (isEarly(*(aa[i].getEndtime()), *(activity->getEndtime())))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);


                } else if (isEarly(*(aa[i].getStarttime()), *(activity->getStarttime())) &&
                           (isEarly(*(activity->getEndtime()), *(aa[i].getEndtime())))) {


                    flag = true;
                    conflictactivity.push_back(aa[i]);

                }
            }
        }
    }
    return flag;
}
/**
 *
 * @param a
 * @param b
 * @return a时间早于或等于返还true，b时间早于a返还false
 */
bool isEarly(Time a, Time b){
    if(a.getHour() < b.getHour()){
        return true;
    }
    if(a.getHour() == b.getHour() && a.getMinute() <= b.getMinute()){
        return true;
    }
    return false;
}
