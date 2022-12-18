cmake_minimum_required(VERSION 3.12)
project(SEARCH-ALGORITHMS VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

## Include sciplot library

include(FetchContent)

FetchContent_Declare(sciplot_content
  GIT_REPOSITORY https://github.com/sciplot/sciplot.git
  GIT_TAG master)

FetchContent_GetProperties(sciplot_content)
if(NOT sciplot_content_POPULATED)
  FetchContent_Populate(sciplot_content)
endif()

include_directories(${sciplot_content_SOURCE_DIR})

##

set(SOURCES src/main.cpp
            src/generate_list.cpp
            src/generate_list.hpp
            src/linear_search.cpp
            src/linear_search.hpp
            src/jump_search.cpp
            src/jump_search.hpp
            src/binary_search.cpp
            src/binary_search.hpp
            src/ternary_search.cpp
            src/ternary_search.hpp
            src/output.cpp
            src/output.hpp
            src/constants.hpp
            src/benchmark.cpp
            src/benchmark.hpp)

add_executable(search ${SOURCES})
