#include "tile_factory.h"
#include "../components/tile.h"

using namespace std;

tile_factory::tile_factory(){}
tile_factory::~tile_factory(){}

tile tile_factory::makeTile(terrain ter, unit u){
    tile t = tile(ter,u);
    return t;}
