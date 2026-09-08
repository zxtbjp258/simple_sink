#include "logger.h"
#include "sink_factory.h"
int main()
{
    // auto file = sink_factory::create(sink_type::FILE);
    // auto console = sink_factory::create(sink_type::CONSOLE);

    // file->log(log_level::INFO, "控制台输出");
    // console->log(log_level::WARN, "文本输出");
    logger lg;
    lg.add_sink(sink_factory::create(sink_type::CONSOLE));
    lg.add_sink(sink_factory::create(sink_type::FILE));

    lg.set_level(log_level::WARN);

    lg.log(log_level::INFO,"系统启动");
    lg.log(log_level::WARN,"系统警告");
    lg.log(log_level::ERROR,"系统报错");
    return 0;
}