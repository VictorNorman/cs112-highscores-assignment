#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "HighScores.h"

TEST_CASE("HighScores unit tests") {
    SECTION("Test getNumScores()") {
        HighScores hs;

        SECTION("Object has no items") {
            REQUIRE(hs.getNumScores() == 0);
        }
        SECTION("Add a score") {
            hs.addScore(30);
            REQUIRE(hs.getNumScores() == 1);
        }
    }
}
