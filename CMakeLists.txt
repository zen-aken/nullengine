cmake_minimum_required(VERSION 4.4.2)
project(NULL_ENGINE VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src/include)

add_executable(null_engine src/main.cpp src/vector/vec2.cpp)