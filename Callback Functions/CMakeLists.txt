cmake_minimum_required(VERSION 3.20)
project(Callback_Functions C)

set(CMAKE_C_STANDARD 11)

add_executable(Callback_Functions main.c calculations/calculation.c calculations/calculation.h)
