#include "Event.h"

namespace creative::event {

    Event::Event() :
            m_handled(false) {}

    bool Event::handled() const {
        return m_handled;
    }

}
