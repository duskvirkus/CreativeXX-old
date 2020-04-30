#include "MouseScrolledEvent.h"

namespace creative::event {

    MouseScrolledEvent::MouseScrolledEvent(float x_offset, float y_offset) :
            m_x_offset(x_offset), m_y_offset(y_offset) {}

    EventType MouseScrolledEvent::type() const {
        return MOUSE_SCROLLED;
    }

    float MouseScrolledEvent::x_offset() const {
        return m_x_offset;
    }

    float  MouseScrolledEvent::y_offset() const {
        return m_y_offset;
    }

}
