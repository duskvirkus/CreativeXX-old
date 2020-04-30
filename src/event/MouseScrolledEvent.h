#ifndef CREATIVEXX_MOUSESCROLLEDEVENT_H
#define CREATIVEXX_MOUSESCROLLEDEVENT_H

#include "Event.h"

namespace creative::event {

    class MouseScrolledEvent : public Event {
    public:

        MouseScrolledEvent(float x_offset, float y_offset);

        MouseScrolledEvent(const MouseScrolledEvent &) = delete;

        MouseScrolledEvent(const MouseScrolledEvent &&) = delete;

        MouseScrolledEvent operator=(const MouseScrolledEvent &) = delete;

        MouseScrolledEvent operator=(const MouseScrolledEvent &&) = delete;

        ~MouseScrolledEvent() override = default;

        [[nodiscard]] EventType type() const override;

        [[nodiscard]] float x_offset() const;

        [[nodiscard]] float y_offset() const;

    private:

        float m_x_offset;
        float m_y_offset;

    };

}

#endif //CREATIVEXX_MOUSESCROLLEDEVENT_H
