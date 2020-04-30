#ifndef CREATIVEXX_MOUSEBUTTONRELEASEDEVENT_H
#define CREATIVEXX_MOUSEBUTTONRELEASEDEVENT_H

#include "MouseButtonEvent.h"

namespace creative::event {

    class MouseButtonReleasedEvent : public MouseButtonEvent {
    public:

        explicit MouseButtonReleasedEvent(int button);

        MouseButtonReleasedEvent(const MouseButtonReleasedEvent&) = default;

        MouseButtonReleasedEvent(const MouseButtonReleasedEvent&&) = delete;

        MouseButtonReleasedEvent operator=(const MouseButtonReleasedEvent&) = delete;

        MouseButtonReleasedEvent operator=(const MouseButtonReleasedEvent&&) = delete;

        ~MouseButtonReleasedEvent() override = default;

        [[nodiscard]] EventType type() const override;

    };

}

#endif //CREATIVEXX_MOUSEBUTTONRELEASEDEVENT_H
