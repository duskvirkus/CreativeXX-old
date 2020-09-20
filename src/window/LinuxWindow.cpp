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
            Window(), m_data({std::move(title), width, height, nullptr}), m_window(nullptr) {

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

        glfwSetWindowSizeCallback(m_window, [](GLFWwindow* window, int width, int height) {
            WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));
            data.width = width;
            data.height = height;
            event::WindowResizedEvent event(width, height);
            data.event_callback(event);
        });

        glfwSetWindowCloseCallback(m_window, [](GLFWwindow *window) {
            WindowData &data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));
            event::WindowClosedEvent event;
            data.event_callback(event);
        });

        glfwSetKeyCallback(m_window, [](GLFWwindow *window, int key, int /*scan_code*/, int action, int /*mods*/) {
            WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));

            switch (action) {
                case GLFW_PRESS:
                {
                    event::KeyPressedEvent event(key, false);
                    data.event_callback(event);
                    break;
                }
                case GLFW_RELEASE:
                {
                    event::KeyReleasedEvent event(key);
                    data.event_callback(event);
                    break;
                }
                case GLFW_REPEAT:
                {
                    event::KeyPressedEvent event(key, true);
                    data.event_callback(event);
                    break;
                }
                default:
                {
                    CREATIVE_WARN("Unexpected path when creating key event!")
                    break;
                }
            }
        });

        glfwSetMouseButtonCallback(m_window, [](GLFWwindow* window, int button, int action, int /*mods*/){
            WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));

            switch (action) {
                case GLFW_PRESS:
                {
                    event::MouseButtonPressedEvent event(button);
                    data.event_callback(event);
                    break;
                }
                case GLFW_RELEASE:
                {
                    event::MouseButtonReleasedEvent event(button);
                    data.event_callback(event);
                    break;
                }
                default:
                {
                    CREATIVE_WARN("Unexpected path when creating mouse button event!")
                    break;
                }
            }
        });

        glfwSetScrollCallback(m_window, [](GLFWwindow* window, double x_off, double y_off){
            WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));

            event::MouseScrolledEvent event(static_cast<float>(x_off), static_cast<float>(y_off));
            data.event_callback(event);
        });

        glfwSetCursorPosCallback(m_window, [](GLFWwindow* window, double x, double y){
            WindowData& data = *static_cast<WindowData*>(glfwGetWindowUserPointer(window));

            event::MouseMovedEvent event(static_cast<float>(x), static_cast<float>(y));
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
