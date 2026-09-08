cmake_minimum_required(VERSION 3.10)
project(SimpleSink)

# 强制要求 C++14 标准（确保 make_unique 可用）
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)   # 关闭编译器扩展，确保标准一致性

include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(test ${SOURCES})
set_target_properties(test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexec-charset=UTF-8")