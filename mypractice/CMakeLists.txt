cmake_minimum_required(VERSION 3.27)
project(mypractice)

set(CMAKE_CXX_STANDARD 17)

add_executable(mypractice main.cpp
        Calculator.h
        defineCal.cpp
)
