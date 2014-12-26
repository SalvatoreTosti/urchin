#include "catch.hpp"
#include "../src/tile.h"
#include "../src/tile_factory.h"
#include "../src/unit_factory.h"
#include "../src/tile_factory.h"

TEST_CASE("Tile factory 'make' functions"){
    SECTION("makeTile"){
        tile_factory factory;
        unit_factory uFactory;
        terrain_factory tFactory;
        tile t = factory.makeTile(tFactory.makePlains(),uFactory.makeTank());
        REQUIRE(t.getTerrain().getName() == "Plains");
        REQUIRE(t.getTerrain().getOffensiveBonus() == 1);
        REQUIRE(t.getTerrain().getDefensiveBonus() == 1);
        REQUIRE(t.getUnit().getName() == "Tank");
        REQUIRE(t.getUnit().getAccuracy() == 1);
        REQUIRE(t.getUnit().getAttack() == 2);
        REQUIRE(t.getUnit().getDefense() == 3);
        REQUIRE(t.getUnit().getHealth() == 4);
        }
    }
