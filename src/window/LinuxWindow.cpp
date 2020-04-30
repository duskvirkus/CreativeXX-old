#include "LinuxWindow.h"

#include <utility>

namespace creative::window {

    static bool s_GLFWInitialized = false;

    static void error_callback(int error, const char* description)
    {
        CREATIVE_ERROR("GLFW Error" + std::to_string(error) + " : " + description);
    }

    Window *Window::create(const std::string &title, unsigned int width, unsigned int height) {
        return new LinuxWindow(title, width, height);
    }

    LinuxWindow::LinuxWindow(std::string title, unsigned int width, unsigned int height) :
            m_data({title, width, height}) {

        CREATIVE_INFO(
                "Creating window " + m_data.title + " w: " + std::to_string(m_data.width) + " h: " +
                std::to_string(m_data.height))

        if (!s_GLFWInitialized) {
            glfwInit();
            CREATIVE_TRACE("GLFW initialized")

            glfwSetErrorCallback(error_callback);
            s_GLFWInitialized = true;
        }

        m_window = glfwCreateWindow(
                static_cast<int>(m_data.width),
                static_cast<int>(m_data.height),
                m_data.title.c_str(),
                nullptr,
                nullptr
        );
        glfwMakeContextCurrent(m_window);
        glfwSetWindowUserPointer(m_window, &m_data);

        glfwSetWindowCloseCallback(m_window, [](GLFWwindow *window) {
            WindowData &data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));
            event::WindowClosedEvent event;
            data.event_callback(event);
        });
    }

    LinuxWindow::~LinuxWindow() {
        glfwDestroyWindow(m_window);
    }

    void LinuxWindow::update() {
        glfwSwapBuffers(m_window);
        glfwPollEvents();
    }

    unsigned int LinuxWindow::width() const {
        return m_data.width;
    }

    unsigned int LinuxWindow::height() const {
        return m_data.height;
    }

    void LinuxWindow::set_event_callback(const EventCallbackFunction &callback) {
        m_data.event_callback = callback;
    }

}
