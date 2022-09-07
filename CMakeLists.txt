cmake_minimum_required(VERSION 3.10)

# set the project name
project(basic)

# add the executable
add_executable(data_type_model data_type_model.cpp)

add_executable(memory_allocation_malloc memory_allocation_malloc.cpp)

add_executable(memory_allocation_calloc memory_allocation_calloc.cpp)


file(GLOB quiz_cpps
     "quiz/*.cpp"
)

list(LENGTH quiz_cpps quiz_cpps_len)

foreach(quiz_cpp IN LISTS quiz_cpps)

    string(REPLACE "/" ";" name_lists ${quiz_cpp})
    message(${name_lists})
    list(LENGTH name_lists name_lists_len)

    MATH(EXPR cpp_name_index "${name_lists_len} - 1")
    message(cpp_name_index)
    list(GET name_lists ${cpp_name_index} cpp_name)
    message(${cpp_name})

    string(REPLACE "." ";" cpp_name_lists ${cpp_name})
    list(GET cpp_name_lists 0 cpp_name_prefix)
    message(${cpp_name_prefix})

    add_executable(${cpp_name_prefix} ${quiz_cpp})
endforeach()

message(STATUS "cpp files in quiz folder: " ${quiz_cpps_len})