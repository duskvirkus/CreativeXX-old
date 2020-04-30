#ifndef CREATIVEXX_KEYEVENT_H
#define CREATIVEXX_KEYEVENT_H

#include "Event.h"

namespace creative::event {

    class KeyEvent : public Event {
    public:

        KeyEvent(const KeyEvent&) = default;

        KeyEvent(const KeyEvent&&) = delete;

        [[nodiscard]] unsigned int key_code() const;

    protected:

        explicit KeyEvent(unsigned int key_code);

        ~KeyEvent() override = default;

    private:

        unsigned int m_key_code;

    };

}

#endif //CREATIVEXX_KEYEVENT_H
