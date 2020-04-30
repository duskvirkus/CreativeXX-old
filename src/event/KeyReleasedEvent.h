#ifndef CREATIVEXX_KEYRELEASEDEVENT_H
#define CREATIVEXX_KEYRELEASEDEVENT_H

#include "KeyEvent.h"

namespace creative::event {

    class KeyReleasedEvent : public KeyEvent {
    public:

        explicit KeyReleasedEvent(unsigned int key_code);

        KeyReleasedEvent(const KeyReleasedEvent&) = delete;

        KeyReleasedEvent(const KeyReleasedEvent&&) = delete;

        KeyReleasedEvent operator=(const KeyReleasedEvent&) = delete;

        KeyReleasedEvent operator=(const KeyReleasedEvent&&) = delete;

        ~KeyReleasedEvent() override = default;

        [[nodiscard]] EventType type() const override;

    };

}

#endif //CREATIVEXX_KEYRELEASEDEVENT_H
