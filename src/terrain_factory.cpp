#include "terrain_factory.h"
#include "terrain.h"

using namespace std;

terrain_factory::terrain_factory(){}
terrain_factory::~terrain_factory(){}

terrain_factory::makePlains(){return terrain("Plains",1,1);}

