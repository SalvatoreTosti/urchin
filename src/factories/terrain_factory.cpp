#include "terrain_factory.h"
#include "../components/terrain.h"

using namespace std;

terrain_factory::terrain_factory(){}
terrain_factory::~terrain_factory(){}


terrain terrain_factory::makePlains(){ 
    terrain t = terrain("Plains",1,1);
    //terrain t;
    return t;}

