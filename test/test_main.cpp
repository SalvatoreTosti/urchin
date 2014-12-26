#include "catch_main.hpp"
//#include "../src/terrain.h"
#include "terrain_test.h"
#include "terrain_fact_test.h"
#include "../src/unit.h"

unsigned int Factorial (unsigned int number ){
    return number <= 1 ? number: Factorial(number-1)*number; }

//Example of how test cases and tags work.
//TEST_CASE( "Factorials are computed","[factorial]" ){
//    REQUIRE( Factorial(1) == 1 ); 
//    REQUIRE( Factorial(2) == 2 );}

/*TEST_CASE( "terrain getters and setters" ){
    SECTION( "getting values from default constructor" ){
        terrain t;
        REQUIRE(t.getName() == "");
        REQUIRE(t.getOffensiveBonus() == 0);
        REQUIRE(t.getDefensiveBonus() == 0);
        }
    }*/

TEST_CASE("unit getters and setters"){
    SECTION("getting values from default constructor"){
        unit u;
        REQUIRE(u.getName() == "");
        REQUIRE(u.getAccuracy() == 0);
        REQUIRE(u.getAttack() == 0);
        REQUIRE(u.getDefense() == 0);
        REQUIRE(u.getHealth() == 0);
        }
    }

