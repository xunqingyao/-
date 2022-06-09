/**
 * @author qingyao
 * @Date 2022/4/19 16:24
 * @coding utf-8
*/

#include "UserInfo.h"
UserInfo::UserInfo() {};


UserInfo::~UserInfo() {};

UserInfo::UserInfo(UserInfo &e)
{
    this->username = e.username;
    this->password = e.password;
}

void UserInfo::setUsername(string username){
    this->username = username;
}


void UserInfo::setPassword(string password) {
    this->password = password;
}


string UserInfo::getPassword() {
    return this->password;
}


string UserInfo::getUsername() {
    return this->username;
}

/**
* 判断是否登录
* @param username 用户名
* @param password  密码
* @return
*/
bool UserInfo::isLogin(string username, string password){
    ifstream f("..\\userinfo\\usernamepassword.txt");
    string str;
    while(!f.eof()){
        getline(f,str);
        int loc = str.find(':');
        string temp = str.substr(0,loc);
        if(std::equal(temp.begin(), temp.end(), username.begin())){
            string pwd = str.substr(loc + 1);
            if(std::equal(pwd.begin(), pwd.end(), password.begin())){
                return true;
            }
        }
    }
    return false;
}

/**
 * 注册
 * @param username 用户名
 * @param password 密码
 * @return
 */
SignUpRes UserInfo::signUp(string username, string password) {
    if(String::isHasSpecialSignal(username,' ') || String::isHasSpecialSignal(username,':')||
       String::isHasSpecialSignal(password,' ')|| String::isHasSpecialSignal(password,':')){
        return SignUpRes::HASSPECIALSIGNAL;
    }
    ifstream f("..\\userinfo\\usernamepassword.txt");
    string str;
    while(!f.eof()) {
        getline(f, str);
        if(str == ""){
            continue;
        }
        int loc = str.find(':');
        string temp = str.substr(0, loc);
        if (std::equal(temp.begin(), temp.end(), username.begin())) {
            return SignUpRes::HASUSERNAME;
        }
    }
    f.close();
    ofstream wf("..\\userinfo\\usernamepassword.txt",ios::app|ios::out);
    wf << '\n' << username << ':' << password;
    wf.close();
    string folderpath = "..\\userinfo\\"+username;
    string command = "mkdir -p "+ folderpath;
    system(command.c_str());
    folderpath = "..\\userinfo\\"+username+"\\homework";
    command = "mkdir -p " + folderpath;
    system(command.c_str());
    folderpath = "..\\userinfo\\"+username+"\\coursematerial";
    command = "mkdir -p " + folderpath;
    system(command.c_str());
    folderpath = "..\\userinfo\\"+username+"\\courseactivity";
    command = "mkdir -p " + folderpath;
    system(command.c_str());
    folderpath = "..\\userinfo\\"+username+"\\log";
    command = "mkdir -p " + folderpath;
    system(command.c_str());
    return SignUpRes::SUCCESS;

}


