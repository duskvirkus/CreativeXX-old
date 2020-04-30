
add_executable(KeyReleasedEvent.spec KeyReleasedEvent.spec.cpp)
target_include_directories(KeyReleasedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(KeyReleasedEvent.spec PRIVATE CreativeXX)

add_executable(KeyPressedEvent.spec KeyPressedEvent.spec.cpp)
target_include_directories(KeyPressedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(KeyPressedEvent.spec PRIVATE CreativeXX)
