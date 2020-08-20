cmake_minimum_required(VERSION 3.15)
project(FacadePatternExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(FacadePatternExample main.cpp src/Facade.h src/Subsystem.h)