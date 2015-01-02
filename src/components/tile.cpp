#include "tile.h"
#include "terrain.h"

tile::tile(){
    terrain t_terrain;
    unit t_unit;    
    }

tile::tile(terrain ter, unit u){
    t_terrain = ter;
    t_unit = u;}

tile::~tile(){}

terrain tile::getTerrain(){return t_terrain;}
unit tile::getUnit(){return t_unit;}
void tile::setTerrain(terrain ter){t_terrain = ter;}
void tile::setUnit(unit u){t_unit = u;}


