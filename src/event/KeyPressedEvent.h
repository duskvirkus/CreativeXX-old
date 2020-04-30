#ifndef CREATIVEXX_KEYPRESSEDEVENT_H
#define CREATIVEXX_KEYPRESSEDEVENT_H

#include "KeyEvent.h"

namespace creative::event {

    class KeyPressedEvent : public KeyEvent {
    public:

        KeyPressedEvent(unsigned int key_code, bool repeat);

        KeyPressedEvent(const KeyPressedEvent &) = delete;

        KeyPressedEvent(const KeyPressedEvent &&) = delete;

        KeyPressedEvent operator=(const KeyPressedEvent &) = delete;

        KeyPressedEvent operator=(const KeyPressedEvent &&) = delete;

        ~KeyPressedEvent() override = default;

        [[nodiscard]] EventType type() const override;

        [[nodiscard]] bool repeat() const;

    private:

        bool m_repeat;

    };

}

#endif //CREATIVEXX_KEYPRESSEDEVENT_H
