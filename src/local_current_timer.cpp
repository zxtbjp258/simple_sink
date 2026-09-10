#include<chrono>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<string>
#include"local_current_timer.h"
std::string local_current_timer::current_time(){
    auto now=std::chrono::system_clock::now();
    std::time_t now_time=std::chrono::system_clock::to_time_t(now);
    std::tm local_time=*std::localtime(&now_time);
    std::ostringstream oss;
    oss<<std::put_time(&local_time,"[%Y-%m-%d %H:%M:%S] ");
    return oss.str();
}

std::string local_current_timer::current_date() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    std::tm local_time = *std::localtime(&now_time);
    std::ostringstream oss;
    oss << std::put_time(&local_time, "%Y-%m-%d");   // 只到日期
    return oss.str();
}