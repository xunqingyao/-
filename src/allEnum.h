/**
 * @author qingyao
 * @Date 2022/4/12 23:40
 * @coding utf-8
*/

#ifndef FINAL_WORK_ALLENUM_H
#define FINAL_WORK_ALLENUM_H
#include <cstdio>
#include <string>
using namespace std;
/**
 * 用于注册函数的返还
 */
enum class SignUpRes{SUCCESS,HASUSERNAME,HASSPECIALSIGNAL};
/**
 * 星期
 */
enum class Week{MONDAY = 0,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY,limit=7};
#endif //FINAL_WORK_ALLENUM_H

