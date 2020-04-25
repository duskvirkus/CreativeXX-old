#include "LinuxWindow.h"

#include <utility>

namespace creative::window {

    static bool s_GLFWInitialized = false;

    Window *Window::create(const std::string &title, unsigned int width, unsigned int height) {
        return new LinuxWindow(title, width, height);
    }

    LinuxWindow::LinuxWindow(std::string title, unsigned int width, unsigned int height) :
            m_title(std::move(title)), m_width(width), m_height(height) {

        CREATIVE_INFO(
                "Creating window " + m_title + " w: " + std::to_string(m_width) + " h: " + std::to_string(m_height))

        if (!s_GLFWInitialized) {
            glfwInit();
            CREATIVE_TRACE("GLFW initialized")
            s_GLFWInitialized = true;
        }

        m_window = glfwCreateWindow(
                static_cast<int>(m_width),
                static_cast<int>(m_height),
                m_title.c_str(),
                nullptr,
                nullptr
                );
        glfwMakeContextCurrent(m_window);
    }

    LinuxWindow::~LinuxWindow() {
        glfwDestroyWindow(m_window);
    }

    void LinuxWindow::update() {
        glfwSwapBuffers(m_window);
    }

    unsigned int LinuxWindow::width() const {
        return m_width;
    }

    unsigned int LinuxWindow::height() const {
        return m_height;
    }

}
