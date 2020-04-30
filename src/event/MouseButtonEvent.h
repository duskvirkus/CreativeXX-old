#ifndef CREATIVEXX_MOUSEBUTTONEVENT_H
#define CREATIVEXX_MOUSEBUTTONEVENT_H

#include "Event.h"

namespace creative::event {

    class MouseButtonEvent : public Event {
    public:

        MouseButtonEvent(const MouseButtonEvent&) = default;
        MouseButtonEvent(const MouseButtonEvent &&) = delete;

        [[nodiscard]] int button() const;

    protected:

        explicit MouseButtonEvent(int button);

        ~MouseButtonEvent() override = default;

    private:

        int m_button;

    };

}

#endif //CREATIVEXX_MOUSEBUTTONEVENT_H
