#pragma once
#include<string>
#include"current_timer.h"
class local_current_timer:current_timer{
    public:
    ~local_current_timer()=default;
    std::string current_time() override;
};