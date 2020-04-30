
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
        window/Window.h
        window/LinuxWindow.cpp
        window/LinuxWindow.h
        event/Event.cpp
        event/Event.h
        event/EventType.h
        event/KeyEvent.cpp
        event/KeyEvent.h
        event/KeyReleasedEvent.cpp
        event/KeyReleasedEvent.h
        event/KeyPressedEvent.cpp
        event/KeyPressedEvent.h
        event/MouseButtonEvent.cpp
        event/MouseButtonEvent.h
        event/WindowClosedEvent.cpp
        event/WindowClosedEvent.h
        )

target_include_directories(CreativeXX INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../include")

target_link_libraries(CreativeXX PRIVATE glfw)
target_include_directories(CreativeXX PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/glfw/include")
