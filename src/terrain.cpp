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
string terrain::getName(){
    return name;
}

int terrain::getOffensiveBonus(){
    return offensiveBonus;
}

int terrain::getDefensiveBonus(){
    return defensiveBonus;
}
