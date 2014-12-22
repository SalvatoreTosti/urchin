#ifndef UNIT_H
#define UNIT_H

#include <string>

class unit{
public:
    unit();
    ~unit();
    string getName();
    int getAccuracy();
    int getAttack();
    int getDefense();
    int getHealth();

private:
    string name;
    int accuracy;
    int attack;
    int defense;
    int health;
};
#endif
