#include "MouseButtonReleasedEvent.h"

namespace creative::event {

    MouseButtonReleasedEvent::MouseButtonReleasedEvent(int button) :
            MouseButtonEvent(button) {}

    EventType MouseButtonReleasedEvent::type() const {
        return MOUSE_BUTTON_RELEASED;
    }

}
