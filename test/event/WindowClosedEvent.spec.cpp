#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("Window Closed Event type()", "[event][Event][WindowClosedEvent]") {
    creative::event::WindowClosedEvent e;
    REQUIRE(e.type() == creative::event::EventType::WINDOW_CLOSED);
}
