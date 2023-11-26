#include "WizardThrong.h"

Wizard operator|(WizardThrong& throng1, WizardThrong& throng2) {
    int combinedMana = 0;
    int combinedEnergy = 0;

    // Vernichte alle Magier und sammle ihre Werte
    // ...

    return Wizard("The Wizard of Porttob", combinedEnergy, combinedMana);
}
