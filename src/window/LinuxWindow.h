#ifndef CREATIVEXX_LINUXWINDOW_H
#define CREATIVEXX_LINUXWINDOW_H

#include <string>
#include <GLFW/glfw3.h>

#include "../log/Log.h"
#include "Window.h"

namespace creative::window {

    class LinuxWindow : public Window {
    public:

        LinuxWindow(std::string title, unsigned int width, unsigned int height);

        LinuxWindow(const LinuxWindow &) = delete;

        LinuxWindow(const LinuxWindow &&) = delete;

        LinuxWindow &operator=(const LinuxWindow &) = delete;

        LinuxWindow &operator=(const LinuxWindow &&) = delete;

        virtual ~LinuxWindow();

        void update() override;

        unsigned int width() const override;

        unsigned int height() const override;

    private:

        GLFWwindow *m_window;

        std::string m_title;

        unsigned int m_width;

        unsigned int m_height;

    };

}

#endif //CREATIVEXX_LINUXWINDOW_H
