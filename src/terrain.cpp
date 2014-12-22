#include "terrain.h"

using namespace std;
//Default constructs with empty values
terrain::terrain(){
    name = "";
    offensiveBonus = 0;
    defensiveBonus = 0;
}

//Destructor does nothing
terrain::~terrain(){
}

//Getters for Terrain
string getName(){
    return name;
}

int offensiveBonus(){
    return offensiveBonus;
}

int defensiveBonus(){
    return defensiveBonus;
}
