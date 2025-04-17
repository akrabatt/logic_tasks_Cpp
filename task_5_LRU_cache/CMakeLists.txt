cmake_minimum_required(VERSION 3.10)

project(LRUCache)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(LRUCache
	main.cpp
	LRUclass.cpp
)
