cmake_minimum_required(VERSION 3.10)

# Название проекта
project(DataAnalyzerProject)

# Версия стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Устанавливаем путь к заголовкам
include_directories(headders)

# Добавляем исполняемый файл
add_executable(DataAnalyzerApp
    main.cpp
    src/StringAnalyzer.cpp
    src/VectorAnalyzer.cpp
)

