#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXX.h>

TEST_CASE("Basic Linux Window", "[window][LinuxWindow]") {
    creative::window::Window::create();
}
