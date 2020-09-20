#ifndef CREATIVEXX_LINUXWINDOW_H
#define CREATIVEXX_LINUXWINDOW_H

#include <string>
#include <GLFW/glfw3.h>

#include "../log/Log.h"
#include "Window.h"
#include "../event/KeyPressedEvent.h"
#include "../event/KeyReleasedEvent.h"
#include "../event/MouseButtonPressedEvent.h"
#include "../event/MouseButtonReleasedEvent.h"
#include "../event/MouseScrolledEvent.h"
#include "../event/MouseMovedEvent.h"
#include "../event/WindowClosedEvent.h"
#include "../event/WindowResizedEvent.h"

namespace creative::window {

    class LinuxWindow : public Window {
    public:

        struct WindowData {
            std::string title;
            unsigned int width;
            unsigned int height;

            EventCallbackFunction event_callback;
        };

        LinuxWindow(std::string title, unsigned int width, unsigned int height);

        LinuxWindow(const LinuxWindow &) = delete;

        LinuxWindow(const LinuxWindow &&) = delete;

        LinuxWindow &operator=(const LinuxWindow &) = delete;

        LinuxWindow &operator=(const LinuxWindow &&) = delete;

        virtual ~LinuxWindow();

        void update() override;

        unsigned int width() const override;

        unsigned int height() const override;

        void set_event_callback(const EventCallbackFunction &callback) override;

    private:

        WindowData m_data;

        GLFWwindow *m_window;

    };

}

#endif //CREATIVEXX_LINUXWINDOW_H
