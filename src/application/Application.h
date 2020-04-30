#ifndef CREATIVEXX_APPLICATION_H
#define CREATIVEXX_APPLICATION_H

#include <iostream>
#include <memory>
#include <functional>

#include "../window/Window.h"
#include "../window/LinuxWindow.h"
#include "../event/Event.h"
#include "../event/MouseButtonPressedEvent.h"
#include "../event/MouseButtonReleasedEvent.h"
#include "../event/MouseScrolledEvent.h"
#include "../event/MouseMovedEvent.h"
#include "../event/KeyPressedEvent.h"
#include "../event/KeyReleasedEvent.h"
#include "../event/WindowResizedEvent.h"

namespace creative::application {

    class Application {
    public:

        Application();

        Application(const Application &) = delete;

        Application(const Application &&) = delete;

        Application &operator=(const Application &) = delete;

        Application &operator=(const Application &&) = delete;

        virtual ~Application() = default;

        void run();

        virtual void setup();

        virtual void update();

        virtual void draw();

        virtual void resize();

        virtual void close();

        virtual void key_down(unsigned int key_code, bool repeat);

        virtual void key_up(unsigned int key_code);

        virtual void mouse_down(int button);

        virtual void mouse_up(int button);

        virtual void mouse_moved();

        virtual void mouse_scrolled(float x_off, float y_off);

        float mouse_x() const;

        float mouse_y() const;

    private:

        bool m_running;
        float m_mouse_x;
        float m_mouse_y;
        std::unique_ptr<window::Window> m_window;

        void internal_on_event(const event::Event& event);

        void internal_close();

        void internal_mouse_move(float x, float y);

    };

}

#endif //CREATIVEXX_APPLICATION_H
