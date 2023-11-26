#ifndef LIVINGTHING_H
#define LIVINGTHING_H

#include "WorldThing.h"

class LivingThing : public WorldThing {
protected:
    int energy;

public:
    LivingThing(const std::string& name, int energy)
            : WorldThing(name), energy(energy > 0 ? energy : 0) {}

    virtual int getEnergy() const { return energy; }
    void setEnergy(int newEnergy) { energy = newEnergy > 0 ? newEnergy : 0; }
    bool isAlive() const { return energy > 0; }
    bool isDead() const { return energy <= 0; }
    LivingThing& operator-=(int damage) {
        setEnergy(getEnergy() - damage);
        return *this;
    }


};

#endif // LIVINGTHING_H
