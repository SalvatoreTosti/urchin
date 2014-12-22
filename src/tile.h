#ifndef TILE_H
#define TILE_H

#include <string>
#include "terrain.h"
#include "unit.h"

using namespace std;

class tile{
public:
    tile();
    ~tile();
    
    terrain getTerrain();
    unit getUnit();

private:
    terrain t_terrain; //Consider better name later
    unit t_unit;
};
#endif
