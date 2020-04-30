#include "Application.h"

namespace creative::application {

    Application::Application() :
            m_running(true), m_window(std::unique_ptr<window::Window>(window::Window::create())) {
        m_window->set_event_callback(std::bind(&Application::on_event, this, std::placeholders::_1));
    }

    void Application::run() {
        setup();
        while (m_running) {
            m_window->update();
            update();
            draw();
        }
    }

    void Application::setup() {
        std::cout << "Setup" << '\n';
    }

    void Application::update() {
        std::cout << "Update" << '\n';
    }

    void Application::draw() {
        std::cout << "Draw" << '\n';
    }

    void Application::on_event(const event::Event &event) {
        switch (event.type()) {
            case event::EventType::WINDOW_CLOSED:
                event_close();
                break;
        }
    }

    void Application::event_close() {
        m_running = false;
    }

}
