#ifndef CREATIVEXX_WINDOW_H
#define CREATIVEXX_WINDOW_H

#include <string>

namespace creative::window {

    class Window {
    public:

        Window() = default;

        Window(const Window &) = delete;

        Window(const Window &&) = delete;

        Window &operator=(const Window &) = delete;

        Window &operator=(const Window &&) = delete;

        virtual ~Window() = default;

        virtual void update() = 0;

        virtual unsigned int width() const = 0;

        virtual unsigned int height() const = 0;

        static Window *
        create(const std::string &title = "Creative++ Window", unsigned int width = 800, unsigned int height = 600);

    };

}

#endif //CREATIVEXX_WINDOW_H
