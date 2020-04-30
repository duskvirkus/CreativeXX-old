#ifndef CREATIVEXX_APPLICATION_H
#define CREATIVEXX_APPLICATION_H

#include <iostream>
#include <memory>
#include <functional>

#include "../window/Window.h"
#include "../window/LinuxWindow.h"
#include "../event/Event.h"

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

        void on_event(const event::Event& event);

        void event_close();

    protected:

        bool m_running;

        std::unique_ptr<window::Window> m_window;

    };

}

#endif //CREATIVEXX_APPLICATION_H
