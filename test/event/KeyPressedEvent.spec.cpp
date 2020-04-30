#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXXspec.h>

TEST_CASE("KeyPressedEvent type()", "[event][Event][KeyEvent][KeyPressedEvent]") {
    creative::event::KeyPressedEvent e(1, false);
    REQUIRE(e.type() == creative::event::EventType::KEY_PRESSED);
}

TEST_CASE("KeyPressedEvent repeat()", "[event][Event][KeyEvent][KeyPressedEvent]") {
    creative::event::KeyPressedEvent t(1, true);
    REQUIRE(t.repeat());

    creative::event::KeyPressedEvent f(1, false);
    REQUIRE(!f.repeat());
}

TEST_CASE("KeyPressedEvent key_code", "[event][Event][KeyEvent][KeyPressedEvent]") {
    creative::event::KeyPressedEvent e('a', false);
    REQUIRE(e.key_code() == 'a');
}
