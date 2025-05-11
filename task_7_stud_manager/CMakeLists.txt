cmake_minimum_required(VERSION 3.10)

project(StudManager)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories(
	${PROJECT_SOURCE_DIR}/include
)

set(SOURCE
	main.cpp
	src/Student.cpp
	src/StudManager.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE})
