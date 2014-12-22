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

//Returns name of terrain param
string getName(terrain t){
    return t.name;
}

//Returns off. bonus
int offensiveBonus(terrain t){
    return t.offensiveBonus;
}

//Returns def. bonus
int defensiveBonus(terrain t){
    return t.defensiveBonus;
}
