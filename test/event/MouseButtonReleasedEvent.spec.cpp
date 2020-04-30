#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Mouse Button Released type()", "[event][Event][MouseButtonEvent][MouseButtonReleased]") {
    creative::event::MouseButtonReleasedEvent e(1);
    REQUIRE(e.type() == creative::event::EventType::MOUSE_BUTTON_RELEASED);
}

TEST_CASE("Mouse Button Released button", "[event][Event][MouseButtonEvent][MouseButtonReleased]") {
    creative::event::MouseButtonReleasedEvent e(2);
    REQUIRE(e.button() == 2);
}
