/**
 * @author qingyao
 * @Date 2022/4/19 16:23
 * @coding utf-8
*/

#include "StringExtendMethod.h"

/**
 * 判断str字符串是否含有ch字符
 * @param str
 * @param ch
 * @return
 */

bool String::isHasSpecialSignal(string str, char ch) {
    char *cstr;
    cstr = new char [str.size() + 1];
    strcpy(cstr, str.c_str());
    for(int i = 0; i < str.size() + 1; i++){
        if(cstr[i] == ch){
            delete[] cstr;
            return true;

        }
    }
    return false;
}

int String::specialSignalLoc(string str, char ch) {
    char *cstr;
    cstr = new char[str.size() + 1];
    strcpy(cstr,str.c_str());
    for(int i = 0; i < str.size() + 1; i++){
        if(cstr[i] == ch){
            return i;
        }
    }
    return -1;
}

vector<string> String::split(string str, char ch) {
    vector<string> res;
    char* cstr;
    cstr = new char[str.size() + 1];
    strcpy(cstr, str.c_str());
    for(int i = 0; i < str.size(); i++){
        char* temp = new char[str.size() + 1];
        int j = 0;
        for(j = 0; i < str.size(); j++, i++){
            if(cstr[i] != ch){
                temp[j] = cstr[i];
            }
            else{
                break;
            }
        }
        temp[j] = '\0';
        string s(temp);
        delete [] temp;
        res.push_back(s);
    }
    return res;
}
