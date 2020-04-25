#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXX.h>

#include <string>

#include "../tools/CoutRedirect.h"

using std::cout;
using std::stringstream;
using std::string;
using test::tools::CoutRedirect;

TEST_CASE("Name Constructor", "[log][Logger]") {
    string name("LoggerName");
    creative::log::Logger l(name);

    CoutRedirect out;

    l.trace("Message");
    REQUIRE(out.str().find(name) != string::npos);
}

TEST_CASE("Level Constructor", "[log][Logger]") {
    creative::log::Logger l(creative::log::Logger::Level::FATAL);

    CoutRedirect out;

    l.trace("Message");
    l.fatal("Message");
    REQUIRE(out.str().find("TRACE") == string::npos);
    REQUIRE(out.str().find("FATAL") != string::npos);
}

void test_levels(const creative::log::Logger& l) {
    l.trace("");
    l.info("");
    l.warn("");
    l.error("");
    l.fatal("");
}

TEST_CASE("Level is working correctly.", "[log][Logger]") {
    CoutRedirect out;
    creative::log::Logger l;
    SECTION("Trace") {
        l.set_level(creative::log::Logger::TRACE);
        test_levels(l);
        REQUIRE(out.str().find("TRACE") != string::npos);
        REQUIRE(out.str().find("INFO") != string::npos);
        REQUIRE(out.str().find("WARN") != string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }
    SECTION("Info") {
        l.set_level(creative::log::Logger::INFO);
        test_levels(l);
        REQUIRE(out.str().find("TRACE") == string::npos);
        REQUIRE(out.str().find("INFO") != string::npos);
        REQUIRE(out.str().find("WARN") != string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }
    SECTION("Warn") {
        l.set_level(creative::log::Logger::WARN);
        test_levels(l);
        REQUIRE(out.str().find("TRACE") == string::npos);
        REQUIRE(out.str().find("INFO") == string::npos);
        REQUIRE(out.str().find("WARN") != string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }
    SECTION("Error") {
        l.set_level(creative::log::Logger::ERROR);
        test_levels(l);
        REQUIRE(out.str().find("TRACE") == string::npos);
        REQUIRE(out.str().find("INFO") == string::npos);
        REQUIRE(out.str().find("WARN") == string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }
    SECTION("Fatal") {
        l.set_level(creative::log::Logger::FATAL);
        test_levels(l);
        REQUIRE(out.str().find("TRACE") == string::npos);
        REQUIRE(out.str().find("INFO") == string::npos);
        REQUIRE(out.str().find("WARN") == string::npos);
        REQUIRE(out.str().find("ERROR") == string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }
}
