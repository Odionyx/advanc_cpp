cmake_minimum_required(VERSION 3.20)

project(smart_arr LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(smart_arr main.cpp smart_array.h smart_array.cpp)
