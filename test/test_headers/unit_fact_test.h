#include "../catch.hpp"
#include "../../src/components/unit.h"
#include "../../src/factories/unit_factory.h"

TEST_CASE("Unit factory 'make' functions"){
    SECTION("makeTank"){
        unit_factory factory;
        unit u = factory.makeTank();
        REQUIRE(u.getName() == "Tank"); 
        REQUIRE(u.getAccuracy() == 1);
        REQUIRE(u.getAttack() == 2);
        REQUIRE(u.getDefense() == 3);
        REQUIRE(u.getHealth() == 4);
    }
}
