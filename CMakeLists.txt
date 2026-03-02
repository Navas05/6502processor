cmake_minimum_required(VERSION 4.1)
project(6502)

set(CMAKE_CXX_STANDARD 20)

add_executable(6502 src/main.cpp
        src/cpu.cpp
        src/cpu.h
        src/memory.cpp
        src/memory.h)
