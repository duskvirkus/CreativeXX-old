cmake_minimum_required(VERSION 3.12)

set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/build")

project(CreativeXX)
set(CMAKE_CXX_STANDARD 17)

SET(GCC_FLAGS "-Werror -Wall -Wextra -Wpedantic")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_FLAGS}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")

# Make Dependencies
add_subdirectory(vendor/glfw)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(examples)
