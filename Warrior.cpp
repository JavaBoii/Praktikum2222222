#include <iostream>
#include "Warrior.h"
#include "NPC.h"

void Warrior::operator>>(NPC& npc) {
    if (npc.isVulnerable()) {
        npc -= 1; // Zieht einen Energiepunkt ab.
    } else {
        this->setEnergy(getEnergy() - 1); // Verliert Energie, wenn NPC nicht verletzlich ist.
    }
}

void Warrior::operator>>(Warrior& otherWarrior) {
    if (otherWarrior.isDead()) {
        std::cout << "Das ist unethisch, Du Tor!" << std::endl;
    } else {
        otherWarrior -= 1;
    }
}


std::ostream& operator<<(std::ostream& os, const Warrior& warrior) {
    os << "Warrior(Name: " << warrior.getName() << ", Energie: " << warrior.getEnergy() << ", Stärke: " << warrior.getStrength() << ")";
    return os;
}
