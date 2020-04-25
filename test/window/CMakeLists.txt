
add_executable(LinuxWindow.spec LinuxWindow.spec.cpp)
target_include_directories(LinuxWindow.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(LinuxWindow.spec PRIVATE CreativeXX)
