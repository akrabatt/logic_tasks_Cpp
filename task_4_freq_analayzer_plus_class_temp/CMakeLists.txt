cmake_minimum_required(VERSION 3.10)

project(DataAnalyzerProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(headders)

add_executable(DataAnalyzerApp
    main.cpp
    src/StringAnalyzer.cpp
    src/VectorAnalyzer.cpp
)

