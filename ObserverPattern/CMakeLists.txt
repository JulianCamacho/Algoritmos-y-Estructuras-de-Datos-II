cmake_minimum_required(VERSION 3.16)
project(ObserverPatternExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(ObserverPatternExample main.cpp Dog.h LivingDog.cpp LivingDog.h RobotDog.cpp RobotDog.h RobotDogAdapter.cpp RobotDogAdapter.h)