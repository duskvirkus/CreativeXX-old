
add_executable(KeyReleasedEvent.spec KeyReleasedEvent.spec.cpp)
target_include_directories(KeyReleasedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(KeyReleasedEvent.spec PRIVATE CreativeXX)

add_executable(KeyPressedEvent.spec KeyPressedEvent.spec.cpp)
target_include_directories(KeyPressedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(KeyPressedEvent.spec PRIVATE CreativeXX)

add_executable(MouseButtonPressedEvent.spec MouseButtonPressedEvent.spec.cpp)
target_include_directories(MouseButtonPressedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(MouseButtonPressedEvent.spec PRIVATE CreativeXX)

add_executable(MouseButtonReleasedEvent.spec MouseButtonReleasedEvent.spec.cpp)
target_include_directories(MouseButtonReleasedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(MouseButtonReleasedEvent.spec PRIVATE CreativeXX)

add_executable(MouseMovedEvent.spec MouseMovedEvent.spec.cpp)
target_include_directories(MouseMovedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(MouseMovedEvent.spec PRIVATE CreativeXX)

add_executable(MouseScrolledEvent.spec MouseScrolledEvent.spec.cpp)
target_include_directories(MouseScrolledEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(MouseScrolledEvent.spec PRIVATE CreativeXX)

add_executable(WindowClosedEvent.spec WindowClosedEvent.spec.cpp)
target_include_directories(WindowClosedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(WindowClosedEvent.spec PRIVATE CreativeXX)

add_executable(WindowResizedEvent.spec WindowResizedEvent.spec.cpp)
target_include_directories(WindowResizedEvent.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(WindowResizedEvent.spec PRIVATE CreativeXX)
