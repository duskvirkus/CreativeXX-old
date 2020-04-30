#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Mouse Scrolled type()", "[event][Event][MouseScrolledEvent]") {
    creative::event::MouseScrolledEvent e(1.0, 2.0);
    REQUIRE(e.type() == creative::event::EventType::MOUSE_SCROLLED);
}

TEST_CASE("Mouse Scrolled offsets", "[event][Event][MouseScrolledEvent]") {
    creative::event::MouseScrolledEvent e(9.34, 5);
    REQUIRE(e.x_offset() == 9.34f);
    REQUIRE(e.y_offset() == 5.0f);
}
