#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("KeyReleasedEvent type()", "[event][Event][KeyEvent][KeyReleasedEvent]") {
    creative::event::KeyReleasedEvent e(1);
    REQUIRE(e.type() == creative::event::EventType::KEY_RELEASED);
}

TEST_CASE("KeyReleasedEvent key_code", "[event][Event][KeyEvent][KeyReleasedEvent]") {
    creative::event::KeyReleasedEvent e('a');
    REQUIRE(e.key_code() == 'a');
}
