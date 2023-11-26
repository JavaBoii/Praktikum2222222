#include "Wizard.h"

void Wizard::operator>>(Warrior& warrior) const {
    // Beispielhafte Implementierung
    int energyDrain = getMana() / 10;
    warrior -= energyDrain;
}

void Wizard::operator>>(Wizard& otherWizard) {
    if (getMana() <= 0) {
        *this -= 1;
    } else {
        otherWizard.setMana(otherWizard.getMana() + 1);
        this->setMana(this->getMana() - 1);
    }
}
