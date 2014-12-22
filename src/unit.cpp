#include "unit.h"
#include <string>

using namespace std;

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
string unit::getName(){
    return name;
}

int unit::getAccuracy(){
    return accuracy;
}

int unit::getAttack(){
    return attack;
}

int unit::getDefense(){
    return defense;
}

int unit::getHealth(){
    return health;
}
