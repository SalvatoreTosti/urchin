#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/terrain.h"

unsigned int Factorial (unsigned int number ){
    return number <= 1 ? number: Factorial(number-1)*number; }

TEST_CASE( "Factorials are computed","[factorial]" ){
    REQUIRE( Factorial(1) == 1 ); 
    REQUIRE( Factorial(2) == 2 );}

//TEST_CASE( "Addition of 2 numbers","[additon]" ){
//    REQUIRE( (1 + 2) == 3);}

TEST_CASE( "getters return terrain values","[terrain]"){
    terrain t;
    SECTION( "getting values from default returns valid values"){
        REQUIRE( t.getName() == "");
        }
    }
