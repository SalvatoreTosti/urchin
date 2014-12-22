#include "tile.h"
#include "terrain.h"

tile::tile(){
    terrain t_terrain;
    unit t_unit;    
    }

tile::~tile(){}

terrain tile::getTerrain(){
    return t_terrain;
}
unit tile::getUnit(){
    return t_unit;
}



