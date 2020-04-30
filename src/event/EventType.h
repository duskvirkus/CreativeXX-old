#ifndef CREATIVEXX_EVENTTYPE_H
#define CREATIVEXX_EVENTTYPE_H

namespace creative::event {

    enum EventType {
        NONE = 0,
        KEY_PRESSED,
        KEY_RELEASED,
        MOUSE_BUTTON_PRESSED,
        MOUSE_BUTTON_RELEASED,
        MOUSE_MOVED,
        MOUSE_SCROLLED,
        WINDOW_CLOSED,
        WINDOW_RESIZED,
        WINDOW_FOCUS,
        WINDOW_LOST_FOCUS,
        WINDOW_MOVED
    };

}

#endif //CREATIVEXX_EVENTTYPE_H
