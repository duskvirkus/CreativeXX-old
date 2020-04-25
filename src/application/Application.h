#ifndef CREATIVEXX_APPLICATION_H
#define CREATIVEXX_APPLICATION_H

#include <iostream>

#include "../window/Window.h"
#include "../window/LinuxWindow.h"

namespace creative {

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

        void loop(bool looping);

        bool looping() const;

    protected:

        bool m_looping;

        window::Window* m_window;

    };

}

#endif //CREATIVEXX_APPLICATION_H
