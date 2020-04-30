#include "Application.h"

namespace creative::application {

    Application::Application() :
            m_running(true), m_mouse_x(0), m_mouse_y(0),
            m_window(std::unique_ptr<window::Window>(window::Window::create())) {
        m_window->set_event_callback(std::bind(&Application::internal_on_event, this, std::placeholders::_1));
    }

    void Application::run() {
        setup();
        while (m_running) {
            m_window->update();
            update();
            draw();
        }
    }

    void Application::setup() {}

    void Application::update() {}

    void Application::draw() {}

    void Application::resize() {}

    void Application::close() {}

    void Application::key_down(unsigned int key_code, bool repeat) {}

    void Application::key_up(unsigned int key_code) {}

    void Application::mouse_down(int button) {}

    void Application::mouse_up(int button) {}

    void Application::mouse_scrolled(float x_off, float y_off) {}

    void Application::mouse_moved() {}

    float Application::mouse_x() const {
        return m_mouse_x;
    }

    float Application::mouse_y() const {
        return m_mouse_y;
    }

    void Application::internal_on_event(const event::Event &event) {
        switch (event.type()) {
            case event::EventType::MOUSE_BUTTON_PRESSED: {
                auto e = dynamic_cast<const event::MouseButtonPressedEvent &>(event);
                mouse_down(e.button());
                break;
            }
            case event::EventType::MOUSE_BUTTON_RELEASED: {
                auto e = dynamic_cast<const event::MouseButtonReleasedEvent &>(event);
                mouse_up(e.button());
                break;
            }
            case event::EventType::KEY_PRESSED: {
                auto e = dynamic_cast<const event::KeyPressedEvent &>(event);
                key_down(e.key_code(), e.repeat());
                break;
            }
            case event::EventType::KEY_RELEASED: {
                auto e = dynamic_cast<const event::KeyReleasedEvent &>(event);
                key_up(e.key_code());
                break;
            }
            case event::EventType::WINDOW_CLOSED: {
                internal_close();
                break;
            }
            case event::EventType::WINDOW_RESIZED: {
                resize();
                break;
            }
            case event::EventType::MOUSE_SCROLLED: {
                auto e = dynamic_cast<const event::MouseScrolledEvent&>(event);
                mouse_scrolled(e.x_offset(), e.y_offset());
                break;
            }
            case event::EventType::MOUSE_MOVED: {
                auto e = dynamic_cast<const event::MouseMovedEvent&>(event);
                internal_mouse_move(e.x(), e.y());
                break;
            }
            default: {
                CREATIVE_WARN("Unimplemented Event in on_event().");
                break;
            }
        }
    }

    void Application::internal_close() {
        CREATIVE_INFO("Closing Application")
        close();
        m_running = false;
    }

    void Application::internal_mouse_move(float x, float y) {
        m_mouse_x = x;
        m_mouse_y = y;
        mouse_moved();
    }

}
