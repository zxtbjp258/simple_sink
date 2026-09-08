#include<iostream>
#include"stdout_sink.h"
void stdout_sink::log(log_level level,const std::string& msg){
    std::string prefix;
    switch(level){
        case log_level::INFO: prefix="[INFO]"; break;
        case log_level::WARN: prefix="[WARN]"; break;
        case log_level::ERROR: prefix="[ERROR]"; break;
    }
    std::cout<<prefix<<msg<<std::endl;
}