cmake_minimum_required(VERSION 3.10)

project(sort_strategy)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories(
	${PROJECT_SOURCE_DIR}/headers
)

set(SOURCE
	main.cpp
	src/class_abs_sort.cpp
	src/class_def_sort.cpp
	src/class_rev_sort.cpp
	src/class_number_processor.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE})
