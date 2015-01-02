#include "../catch.hpp"
#include "../../src/components/terrain.h"
#include "../../src/factories/terrain_factory.h"


TEST_CASE("Terrain factory 'make' functions"){
    SECTION("makePlains"){
        terrain_factory factory;
        terrain t = factory.makePlains();
        //REQUIRE( (2 + 3) == 5);
        REQUIRE(t.getName() == "Plains");
        REQUIRE(t.getOffensiveBonus() == 1);
        REQUIRE(t.getDefensiveBonus() == 1);
        }
    }
