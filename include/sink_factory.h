#pragma once
#include"sink.h"
#include"stdout_sink.h"
#include"file_sink.h"
#include<memory>
class sink_factory{
    public:
    static std::unique_ptr<sink> create(sink_type type){
        switch (type)
        {
        case sink_type::CONSOLE:
            return std::make_unique<stdout_sink>();
        case sink_type::FILE:
            return std::make_unique<file_sink>();
        default:
            return nullptr;
        }
    }
};