#include "WindowResizedEvent.h"

namespace creative::event {

    WindowResizedEvent::WindowResizedEvent(unsigned int width, unsigned int height) :
            m_width(width), m_height(height) {}

    EventType WindowResizedEvent::type() const {
        return WINDOW_RESIZED;
    }

    unsigned int WindowResizedEvent::width() const {
        return m_width;
    }

    unsigned int WindowResizedEvent::height() const {
        return m_height;
    }

}
