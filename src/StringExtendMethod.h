/**
 * @author qingyao
 * @Date 2022/4/15 17:55
 * @coding utf-8
*/

#ifndef FINAL_WORK_STRINGEXTENDMETHOD_H
#define FINAL_WORK_STRINGEXTENDMETHOD_H

#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

/**
 * 字符串操作
 */
class String{
public:
    static bool isHasSpecialSignal(string str,char ch);
    static int specialSignalLoc(string str, char ch);
    static vector<string> split(string str, char ch);
};







#endif //FINAL_WORK_STRINGEXTENDMETHOD_H
