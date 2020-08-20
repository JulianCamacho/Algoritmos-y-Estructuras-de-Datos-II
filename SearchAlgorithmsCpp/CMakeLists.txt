cmake_minimum_required(VERSION 3.16)
project(SearchAlgorithmsCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(SearchAlgorithmsCpp main.cpp AlgorithmsCpp/BinarySearchCpp.h AlgorithmsCpp/SequencialSearchCpp.h AlgorithmsCpp/InterpolationSearchCpp.h)