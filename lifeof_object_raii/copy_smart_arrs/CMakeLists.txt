cmake_minimum_required(VERSION 3.20)

project(copy_smart_arrs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(copy_smart_arrs main.cpp smart_array.h smart_array.cpp)
