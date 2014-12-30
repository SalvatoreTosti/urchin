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

unit::unit(string n, int acc, int atk, int def, int hp){
    name = n;
    accuracy = acc;
    attack = atk;
    defense = def;
    health = hp;
}

//Destructor does nothing
unit::~unit(){
}

//Getters for Units
string unit::getName(){return name;}
int unit::getAccuracy(){return accuracy;}
int unit::getAttack(){return attack;}
int unit::getDefense(){return defense;}
int unit::getHealth(){return health;}
