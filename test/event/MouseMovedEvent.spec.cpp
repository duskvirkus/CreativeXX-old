#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Mouse Moved type()", "[event][Event][MouseMovedEvent]") {
    creative::event::MouseMovedEvent e(1.0, 2.0);
    REQUIRE(e.type() == creative::event::EventType::MOUSE_MOVED);
}

TEST_CASE("Mouse Moved position", "[event][Event][MouseMovedEvent]") {
    creative::event::MouseMovedEvent e(5.3, 4.7);
    REQUIRE(e.x() == 5.3f);
    REQUIRE(e.y() == 4.7f);
}
