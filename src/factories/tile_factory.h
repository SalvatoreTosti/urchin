/* tile_factory.h */

#ifndef TILE_FACTORY_H
#define TILE_FACTORY_H

#include "../components/tile.h"

using namespace std;

class tile_factory{

public:
    tile_factory();
    ~tile_factory();
    
    tile makeTile(terrain, unit);

private:
};
#endif
