#ifndef STONE_H
#define STONE_H

#include "NPC.h"

class Stone : public NPC {
public:
    Stone(const std::string& name) : NPC(name, 100, false) {}

    int getEnergy() const override { return 100; }
};

#endif // STONE_H
