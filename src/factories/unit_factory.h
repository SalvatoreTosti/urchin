/* unit_factory.h */

#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include <string>
#include "../components/unit.h"

using namespace std;

class unit_factory{

public:
    unit_factory();
    ~unit_factory();

    unit makeTank();

private:

};
#endif
