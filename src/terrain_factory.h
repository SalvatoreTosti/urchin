/* terrain_factory.h */

#ifndef TERRAIN_FACTORY_H
#define TERRAIN_FACTORY_H

#include <string>
#include "terrain.h"

using namespace std;

class terrain_factory{

public:
    terrain_factory();
    ~terrain_factory();
    
    terrain makePlains();

private:

};
#endif
