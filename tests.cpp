#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "HighScores.h"

TEST_CASE("step 2") {
    HighScores hs;

    SECTION("Object has no items") {
        REQUIRE(hs.getNumScores() == 0);
    }
}
