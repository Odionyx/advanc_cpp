cmake_minimum_required(VERSION 3.20)

project(number_counter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(number_counter main.cpp my_functor.h my_functor.cpp)
