cmake_minimum_required(VERSION 3.9.2)
project(ci_test)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(tests)

add_executable(${PROJECT_NAME} src/main.cpp src/Printer.h)