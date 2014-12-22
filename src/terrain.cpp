#include "terrain.h"

using namespace std;
//Default constructs with empty params
terrain::terrain(){
    name = empty_Terrain;
    offensiveBonus = empty_Offensive_Bonus;
    defensiveBonus = empty_Defensive_Bonus;
}

//Destructor does nothing, no mem allocated
terrain::~terrain(){
}

string getName(terrain t){
    return t.name;
}
