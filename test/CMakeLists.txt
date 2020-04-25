
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_CURRENT_SOURCE_DIR}/../bin/test")

add_executable(working.spec working.spec.cpp)
target_include_directories(working.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/catch")

add_subdirectory(log)
