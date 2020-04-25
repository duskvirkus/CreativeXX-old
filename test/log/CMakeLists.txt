
add_executable(Logger.spec Logger.spec.cpp ../tools/CoutRedirect.cpp ../tools/CoutRedirect.h)
target_include_directories(Logger.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(Logger.spec PRIVATE CreativeXX)

add_executable(Log.spec Log.spec.cpp ../tools/CoutRedirect.cpp ../tools/CoutRedirect.h)
target_include_directories(Log.spec PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../../vendor/catch")
target_link_libraries(Log.spec PRIVATE CreativeXX)
