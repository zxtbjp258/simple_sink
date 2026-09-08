#pragma once
#include "sink.h"
#include <string>
class stdout_sink:public sink{
    public:
    ~stdout_sink()=default;
    void log(log_level level, const std::string& msg) override;
};
