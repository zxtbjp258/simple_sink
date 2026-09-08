#include"logger.h"
void logger::add_sink(std::unique_ptr<sink> s){
    sinks_.push_back(std::move(s));
}
void logger::log(log_level level,const std::string& msg){
    if(level<min_level){
        return;
    }
    for(auto&s:sinks_){
        s->log(level,msg);
    }
}
void logger::set_level(log_level level){
    min_level=level;
}