#ifndef CREATIVEXX_MOUSEMOVEDEVENT_H
#define CREATIVEXX_MOUSEMOVEDEVENT_H

#include "Event.h"

namespace creative::event {

    class MouseMovedEvent : public Event {
    public:

        MouseMovedEvent(float x, float y);

        MouseMovedEvent(const MouseMovedEvent &) = default;

        MouseMovedEvent(const MouseMovedEvent &&) = delete;

        MouseMovedEvent operator=(const MouseMovedEvent &) = delete;

        MouseMovedEvent operator=(const MouseMovedEvent &&) = delete;

        ~MouseMovedEvent() override = default;

        [[nodiscard]] EventType type() const override;

        [[nodiscard]] float x() const;

        [[nodiscard]] float y() const;

    private:

        float m_x;
        float m_y;

    };

}

#endif //CREATIVEXX_MOUSEMOVEDEVENT_H
