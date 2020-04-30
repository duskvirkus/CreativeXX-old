#ifndef CREATIVEXX_WINDOWRESIZEDEVENT_SPEC_H
#define CREATIVEXX_WINDOWRESIZEDEVENT_SPEC_H

#include "Event.h"

namespace creative::event {

    class WindowResizedEvent : public Event {
    public:

        WindowResizedEvent(unsigned int width, unsigned int height);

        WindowResizedEvent(const WindowResizedEvent &) = delete;

        WindowResizedEvent(const WindowResizedEvent &&) = delete;

        WindowResizedEvent operator=(const WindowResizedEvent &) = delete;

        WindowResizedEvent operator=(const WindowResizedEvent &&) = delete;

        ~WindowResizedEvent() override = default;

        [[nodiscard]] EventType type() const override;

        [[nodiscard]] unsigned int width() const;

        [[nodiscard]] unsigned int height() const;

    private:

        unsigned int m_width;
        unsigned int m_height;

    };

}

#endif //CREATIVEXX_WINDOWRESIZEDEVENT_SPEC_H
