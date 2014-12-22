#include "unit.h"
#include <string>

//Constructor assigns empty values
unit::unit(){
    name = "";
    accuracy = 0;
    attack = 0;
    defense = 0;
    health = 0;
}

//Destructor does nothing
unit::~unit(){
}

//Getters for Units
string getName(){
    return name;
}

int getAccuracy(){
    return accuracy;
}

int getAttack(){
    return attack;
}

int getDefense(){
    return defense;
}

int getHealth(){
    return health;
}
