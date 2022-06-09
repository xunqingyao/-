/**
 * @author qingyao
 * @Date 2022-4-11 23:52
 * @coding utf-8
*/

#ifndef FINAL_WORK_USERINFO_H
#define FINAL_WORK_USERINFO_H
#include <Windows.h>
#include <cstdio>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "allEnum.h"
#include "StringExtendMethod.h"
using namespace std;
/**
 * 用户名
 * 密码
 */
class UserInfo {
private:
    string username;
    string password;
public:
    UserInfo();
    ~UserInfo();
    UserInfo(UserInfo &e);
    void setUsername(string username);
    void setPassword(string password);
    string getUsername();
    string getPassword();
    static bool isLogin(string username, string password);
    static SignUpRes signUp(string username, string password);
};

inline UserInfo *theLoginUser;

#endif //FINAL_WORK_USERINFO_H
