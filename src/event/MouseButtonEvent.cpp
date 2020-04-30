#include "MouseButtonEvent.h"

namespace creative::event {

    MouseButtonEvent::MouseButtonEvent(int button) :
            m_button(button) {}

    int MouseButtonEvent::button() const {
        return m_button;
    }

}
