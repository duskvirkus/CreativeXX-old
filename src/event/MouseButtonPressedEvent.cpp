#include "MouseButtonPressedEvent.h"

namespace creative::event {

    MouseButtonPressedEvent::MouseButtonPressedEvent(int button) :
            MouseButtonEvent(button) {}

    EventType MouseButtonPressedEvent::type() const {
        return MOUSE_BUTTON_PRESSED;
    }

}
