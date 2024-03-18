cmake_minimum_required(VERSION 3.27)
project(Laba_2_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_2_2 main.cpp
        Integer.h
        Integer.cpp)

include_directories(
        ./
)