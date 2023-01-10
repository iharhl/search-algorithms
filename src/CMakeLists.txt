# Include FetchContent
include(FetchContent)

# Fetch sciplot library
FetchContent_Declare(sciplot_content
  GIT_REPOSITORY https://github.com/sciplot/sciplot.git
  GIT_TAG master)

FetchContent_GetProperties(sciplot_content)
if(NOT sciplot_content_POPULATED)
  FetchContent_Populate(sciplot_content)
endif()

include_directories(${sciplot_content_SOURCE_DIR})

# Make library from src files required for testing
add_library(sourcecode 
    generate_list.cpp
    generate_list.hpp
    linear_search.cpp
    linear_search.hpp
    jump_search.cpp
    jump_search.hpp
    binary_search.cpp
    binary_search.hpp
    ternary_search.cpp
    ternary_search.hpp
    constants.hpp)

# Link all the other files to create executable
add_executable(main 
    main.cpp
    output.cpp
    output.hpp
    benchmark.cpp
    benchmark.hpp)
target_link_libraries(main PRIVATE sourcecode)
