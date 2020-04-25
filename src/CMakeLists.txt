
add_library(
        CreativeXX
        SHARED
        application/Application.cpp
        application/Application.h
        core/entry.h
        core/init.cpp
        core/init.h
        log/Log.cpp
        log/Log.h
        log/Logger.cpp
        log/Logger.h
        )

target_include_directories(CreativeXX PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include")
