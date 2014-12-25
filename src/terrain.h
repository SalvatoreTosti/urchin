/* terrain.h */

#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>

using namespace std;

class terrain {
public:
	terrain();
	~terrain();
    terrain(string, int, int);
	
    string getName();
    int getOffensiveBonus();
    int getDefensiveBonus();
    
private:
    string name;
    int offensiveBonus;
    int defensiveBonus;
    void setName(string);
    void setOffensiveBonus(int);
    void setDefensiveBonus(int);    
};
#endif
