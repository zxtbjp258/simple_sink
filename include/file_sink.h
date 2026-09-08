#include"sink.h"
#include<string>
#pragma once
class file_sink:public sink{
    public:
    ~file_sink()=default;
    void log(log_level level,const std::string& msg) override;
};