cmake_minimum_required(VERSION 3.5)

project(eliminat_cross LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(eliminat_cross main.cpp)

install(TARGETS eliminat_cross
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
