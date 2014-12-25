#include "terrain.h"

using namespace std;

//Default constructs with empty values
terrain::terrain(){
    name = "";
    offensiveBonus = 0;
    defensiveBonus = 0;}

terrain::terrain(string n, int offensive, int defensive){
    name = n;
    offensiveBonus = offensive;
    defensiveBonus = defensive;}    

terrain::~terrain(){}

//Getters
string terrain::getName(){return name;}
int terrain::getOffensiveBonus(){return offensiveBonus;}
int terrain::getDefensiveBonus(){return defensiveBonus;}

//Setters
void terrain::setName(string n){name = n;}
void terrain::setOffensiveBonus(int offensive){offensiveBonus = offensive;}
void terrain::setDefensiveBonus(int defensive){defensiveBonus = defensive;}


