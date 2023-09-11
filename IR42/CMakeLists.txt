cmake_minimum_required(VERSION 3.20)
project(IR42 C)

set(CMAKE_C_STANDARD 99)

add_executable(IR42 main.c
        ir42.h
        ir42.c)
