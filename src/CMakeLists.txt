# Include FetchContent
include(FetchContent)

# Fetch sciplot library
FetchContent_Declare(sciplot_content
  GIT_REPOSITORY https://github.com/sciplot/sciplot.git
  GIT_TAG master)

# FetchContent_MakeAvailable(sciplot)
FetchContent_GetProperties(sciplot_content)
if(NOT sciplot_content_POPULATED)
  FetchContent_Populate(sciplot_content)
endif()

include_directories(${sciplot_content_SOURCE_DIR})

# Make library from src files
add_library(sourcecode 
    main.cpp
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
    output.cpp
    output.hpp
    constants.hpp
    benchmark.cpp
    benchmark.hpp)
