///**
// * @author qingyao
// * @Date 2022/4/25 10:54
// * @coding utf-8
//*/

//#include "Alarm.h"

//using namespace std;

//void Alarm::setMonth(string month) {
//    this->month = month;
//}

//void Alarm::setDate(string date) {
//    this->date = date;
//}

//void Alarm::setTime(Time time) {
//    this->time = time;
//}

//string Alarm::getMonth() {
//    return this->month;
//}

//string Alarm::getDate() {
//    return this->date;
//}

//Time *Alarm::getTime() {
//    return &(this->time);
//}

//void Alarm::alarmRemind(int minutes) {


//}

//void Alarm::run(int minutes) {
//    SYSTEMTIME sys;
//    GetLocalTime(&sys);
//    int hour = sys.wHour;
//    int minute = sys.wMinute;
//    while(true){
//        //休眠一分钟
//        GetLocalTime(&sys);
//        int curhour = sys.wHour;
//        int curminute = sys.wMinute;
//        int interval = (curhour - hour) * 60 + curminute - minute;
//        if(minutes - interval < 5 && minutes - interval > 0){
//            break;
//        }
//    }
//}
