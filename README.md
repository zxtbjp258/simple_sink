# SimpleSink

一个轻量级 C++ 日志库，支持多输出目标、日志级别过滤、时间戳自动附加。

## 功能特性

- 抽象 `sink` 接口，支持自定义输出目标
- 内置控制台输出（`stdout_sink`）和文件输出（`file_sink`）
- 日志级别：`INFO` / `WARN` / `ERROR`，支持运行时过滤
- 每条日志自动附加时间戳 `[YYYY-MM-DD HH:MM:SS]`
- 工厂模式创建 sink
- CMake 构建，支持 MinGW / GCC

## 项目结构

```
simple_sink/
├── include/          # 头文件
│   ├── sink.h
│   ├── stdout_sink.h
│   ├── file_sink.h
│   ├── logger.h
│   └── sink_factory.h
├── src/              # 源文件
├── bin/              # 可执行文件输出目录
├── build/            # CMake 构建目录
└── CMakeLists.txt
```

## 编译与运行

```bash
mkdir build && cd build
cmake .. -G "MinGW Makefiles"
mingw32-make
cd ..
bin/test
```

## 使用示例

```cpp
#include "logger.h"
#include "sink_factory.h"

int main() {
    logger lg;
    lg.add_sink(sink_factory::create(sink_type::CONSOLE));
    lg.add_sink(sink_factory::create(sink_type::FILE));

    lg.set_level(log_level::WARN);
    lg.log(log_level::INFO, "这行不会输出");
    lg.log(log_level::WARN, "警告信息");
    lg.log(log_level::ERROR, "错误信息");

    return 0;
}
```

## 依赖

- C++14 或更高
- CMake 3.10+
- MinGW / GCC / MSVC

## 后续扩展方向

- 按天轮转日志文件
- 支持 JSON 格式输出
- 多线程安全