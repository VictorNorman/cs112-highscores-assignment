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
    // SECTION("size 1") {
    //     int numbers[] = {1};
    //     int dup_number = -1;

    //     SECTION("Array has only 1 item") {
    //         bool res = findDuplicate(numbers, 1, dup_number);
    //         REQUIRE(!res);
    //         REQUIRE(dup_number == -1);
    //     }
    // }

    // SECTION("size 5") {
    //     int numbers[] = {1, 2, 3, 4, 5};
    //     int dup_number = -1;

    //     SECTION("No duplicate exists") {
    //         bool res = findDuplicate(numbers, 5, dup_number);
    //         REQUIRE(!res);
    //         REQUIRE(dup_number == -1);
    //     }
    //     SECTION("Duplicate is at the beginning") {
    //         numbers[1] = 1;  // 1, 1, 3, 4, 5
    //         bool res = findDuplicate(numbers, 5, dup_number);
    //         REQUIRE(res);
    //         REQUIRE(dup_number == 1);
    //     }
    //     SECTION("Duplicate is in the middle") {
    //         numbers[2] = 1;  // 1, 2, 1, 4, 5
    //         bool res = findDuplicate(numbers, 5, dup_number);
    //         REQUIRE(res);
    //         REQUIRE(dup_number == 1);
    //     }
    //     SECTION("Duplicate is at the end") {
    //         numbers[3] = 5;  // 1, 2, 3, 5, 5
    //         bool res = findDuplicate(numbers, 5, dup_number);
    //         REQUIRE(res);
    //         REQUIRE(dup_number == 5);
    //     }
    // }
}
