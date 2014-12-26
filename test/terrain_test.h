#include "catch.hpp"
#include "../src/terrain.h"

TEST_CASE( "terrain getters and setters" ){
    SECTION( "getting values from default constructor" ){
        terrain t;
        REQUIRE(t.getName() == "");
        REQUIRE(t.getOffensiveBonus() == 0);
        REQUIRE(t.getDefensiveBonus() == 0);
        }
    }

