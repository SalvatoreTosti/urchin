/* terrain.h */

#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>

class terrain {
public:
	terrain();
	~terrain();
	
    string getName();
    int getOffensiveBonus();
    int getDefensiveBonus();

private:
    string name;
    int offensiveBonus;
    int defensiveBonus;    
};
#endif
