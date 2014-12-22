#ifndef TILE_H
#define TILE_H

#include <string>

using namespace std;

class tile{
public:
    tile();
    ~tile();

private:
    terrain t_terrain; //Consider better name later
    unit t_unit;
};
