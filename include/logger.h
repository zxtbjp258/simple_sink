#pragma once
#include"sink.h"
#include<vector>
#include<memory>

class logger{
    public:
        void add_sink(std::unique_ptr<sink> s);
        void log(log_level level,const std::string& msg);
        void set_level(log_level level);
    private:
        std::vector<std::unique_ptr<sink>> sinks_;
        log_level min_level;
};