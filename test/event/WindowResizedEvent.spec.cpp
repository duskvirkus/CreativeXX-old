#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Window Resized Event type()", "[event][Event][WindowResizedEvent]") {
    creative::event::WindowResizedEvent e(100,100);
    REQUIRE(e.type() == creative::event::EventType::WINDOW_RESIZED);
}

TEST_CASE("Window Resized sizes", "[event][Event][WindowResizedEvent]") {
    creative::event::WindowResizedEvent e(100,99);
    REQUIRE(e.width() == 100);
    REQUIRE(e.height() == 99);
}
