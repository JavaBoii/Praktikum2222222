#ifndef PLANT_H
#define PLANT_H

#include "NPC.h"

class Plant : public NPC {
public:
    Plant(const std::string& name, int energy)
            : NPC(name, energy, true) {}
};

#endif // PLANT_H
