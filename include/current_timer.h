#pragma once
#include<string>
class current_timer{
    public:
    virtual ~current_timer()=default;
    virtual std::string current_time()=0;
};