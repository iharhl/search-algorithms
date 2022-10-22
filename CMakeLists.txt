cmake_minimum_required(VERSION 3.12)
project(SEARCH-ALGORITHMS VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/main.cpp
            src/generate_list.cpp
            src/generate_list.hpp
            src/linear_search.cpp
            src/linear_search.hpp
            src/binary_search.cpp
            src/binary_search.hpp
            src/constants.hpp)

add_executable(search ${SOURCES})