cmake_minimum_required(VERSION 3.12)
project(ci_test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)

add_executable(${PROJECT_NAME} src/main.cpp src/Printer.h)