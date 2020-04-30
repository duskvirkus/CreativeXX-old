#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Mouse Button Pressed type()", "[event][Event][MouseButtonEvent][MouseButtonPressedEvent]") {
    creative::event::MouseButtonPressedEvent e(1);
    REQUIRE(e.type() == creative::event::EventType::MOUSE_BUTTON_PRESSED);
}

TEST_CASE("Mouse Button Pressed button", "[event][Event][MouseButtonEvent][MouseButtonPressedEvent]") {
    creative::event::MouseButtonPressedEvent e(1);
    REQUIRE(e.button() == 1);
}
