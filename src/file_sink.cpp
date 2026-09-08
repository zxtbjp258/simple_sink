#include<fstream>
#include<iostream>
#include<string>
#include"file_sink.h"
#include"local_current_timer.h"
void file_sink::log(log_level level,const std::string& msg){
    local_current_timer lct;
    std::string date=lct.current_time();
    std::string prefix;
    switch(level){
        case log_level::INFO: prefix="[INFO]"; break;
        case log_level::WARN: prefix="[WARN]"; break;
        case log_level::ERROR: prefix="[ERROR]"; break;
    }
    std::ofstream file("../test.txt",std::ios::app);
    if(file.is_open()){
        file << date << prefix << msg << std::endl;
        file.close();
    }
    else{
        std::cerr << "无法打开文件" << std::endl;
    }
}   