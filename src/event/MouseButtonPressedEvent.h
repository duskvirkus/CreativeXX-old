#ifndef CREATIVEXX_MOUSEBUTTONPRESSEDEVENT_H
#define CREATIVEXX_MOUSEBUTTONPRESSEDEVENT_H

#include "MouseButtonEvent.h"

namespace creative::event {

    class MouseButtonPressedEvent : public MouseButtonEvent {
    public:

        explicit MouseButtonPressedEvent(int button);

        MouseButtonPressedEvent(const MouseButtonPressedEvent&) = delete;

        MouseButtonPressedEvent(const MouseButtonPressedEvent&&) = delete;

        MouseButtonPressedEvent operator=(const MouseButtonPressedEvent&) = delete;

        MouseButtonPressedEvent operator=(const MouseButtonPressedEvent&&) = delete;

        ~MouseButtonPressedEvent() override = default;

        [[nodiscard]] EventType type() const override;

    };

}

#endif //CREATIVEXX_MOUSEBUTTONPRESSEDEVENT_H
