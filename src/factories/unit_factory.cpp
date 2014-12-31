#include "unit_factory.h"
#include "../components/unit.h"

using namespace std;

unit_factory::unit_factory(){}
unit_factory::~unit_factory(){}

unit unit_factory::makeTank(){
    //FIXME - Change values to real ones later
    unit u = unit("Tank", 1, 2, 3, 4);
    return u;}
