#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <CreativeXX.h>

#include "../tools/CoutRedirect.h"

#include <string>

using std::stringstream;
using std::string;
using std::cout;
using test::tools::CoutRedirect;

TEST_CASE("Creative macros", "[log][Log]") {
    CoutRedirect out;

    SECTION("Trace") {
        string s("Creative Trace");
        CREATIVE_TRACE(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("TRACE") != string::npos);
    }

    SECTION("Info") {
        string s("Creative Info");
        CREATIVE_INFO(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("INFO") != string::npos);
    }

    SECTION("Warn") {
        string s("Creative Warn");
        CREATIVE_WARN(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("WARN") != string::npos);
    }

    SECTION("Error") {
        string s("Creative Error");
        CREATIVE_ERROR(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
    }

    SECTION("Fatal") {
        string s("Creative Fatal");
        CREATIVE_FATAL(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }

    REQUIRE(out.str().find("CR") != string::npos);
}

TEST_CASE("Masterpiece macros", "[log][Log]") {
    CoutRedirect out;

    SECTION("Trace") {
        string s("Masterpiece Trace");
        LOG_TRACE(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("TRACE") != string::npos);
    }

    SECTION("Info") {
        string s("Masterpiece Info");
        LOG_INFO(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("INFO") != string::npos);
    }

    SECTION("Warn") {
        string s("Masterpiece Warn");
        LOG_WARN(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("WARN") != string::npos);
    }

    SECTION("Error") {
        string s("Masterpiece Error");
        LOG_ERROR(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("ERROR") != string::npos);
    }

    SECTION("Fatal") {
        string s("Masterpiece Fatal");
        LOG_FATAL(s)
        REQUIRE(out.str().find(s) != string::npos);
        REQUIRE(out.str().find("FATAL") != string::npos);
    }

    REQUIRE(out.str().find("MP") != string::npos);
}
