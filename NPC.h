#ifndef NPC_H
#define NPC_H

#include "LivingThing.h"

class NPC : public LivingThing {
protected:
    const bool vulnerable;

public:
    NPC(const std::string& name, int energy, bool vulnerable)
            : LivingThing(name, energy), vulnerable(vulnerable) {}

    bool isVulnerable() const { return vulnerable; }
};

#endif // NPC_H
