#pragma once
#include <string>
enum class log_level{
    INFO,
    WARN,
    ERROR
}; 
enum class sink_type{
    CONSOLE,
    FILE
};
class sink{
    public:
    virtual ~sink()=default;
    virtual void log(log_level level,const std::string& msg)=0;
};