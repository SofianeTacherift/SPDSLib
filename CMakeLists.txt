cmake_minimum_required(VERSION 3.29)
project(SPDSLib C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(src)


add_executable(array_list_test
        test/array_list_test.c
)

add_executable(hash_set_test
        test/hash_set_test.c
)

add_executable(hash_map_test
        test/hash_map_test.c
)

add_executable(hash_utils_test
        test/hash_utils_test.c
)

