#include <string.h>
#include "../include/card_helpers.h"
#include "../include/land_card.h"

// Mana Cost Helpers
void setManaCost(ManaCost* manaCost, int total, int colorless, int green, int red, int blue, int white, int black, bool isXCost) {
    manaCost->total = total;
    manaCost->colorless = colorless;
    manaCost->green = green;
    manaCost->red = red;
    manaCost->blue = blue;
    manaCost->white = white;
    manaCost->black = black;
    manaCost->isXCost = isXCost;
}

// Abilities Helpers
void setDefaultAbilities(Abilities* abilities) {
    abilities->hasFlying = false;
    abilities->hasHaste = false;
    abilities->hasTrample = false;
    abilities->hasFirstStrike = false;
    abilities->hasVigilance = false;
}

// Unblockable Helpers
void setUnblockables(Unblockables* unblockableVarieties) {
    unblockableVarieties->isUnblockable = false;
    unblockableVarieties->blockableByType = false;
    unblockableVarieties->blockableByLegend = false;
}

// Sorcery Helpers
void resetSorcery(SorceryBasics* sorcery_mechanics) {
    sorcery_mechanics->inHand = false;
    sorcery_mechanics->inGraveyard = false;
    sorcery_mechanics->inLibrary = true;
    sorcery_mechanics->isExiled = false;
    sorcery_mechanics->canFlashback = false;
    sorcery_mechanics->canBeCopied = false;
}

// Buff/Debuff Helpers
void resetBuffDebuffEffect(BuffDebuffEffect* buffDebuffEffect) {
    buffDebuffEffect->hasBuffEffect = false;
    buffDebuffEffect->buffPower = 0;
    buffDebuffEffect->buffToughness = 0;
    buffDebuffEffect->hasDebuffEffect = false;
    buffDebuffEffect->debuffPower = 0;
    buffDebuffEffect->debuffToughness = 0;
}

// Reset land mechanics
void resetLandMechanics(LandMechanicBasics* mechanics) {
    mechanics->inHand = false;
    mechanics->inPlay = false;
    mechanics->inGraveyard = false;
    mechanics->inLibrary = true;
    mechanics->isTapped = false;
}

// Reset mana production
void resetManaProduction(ManaProduction* production) {
    production->producingMana = false;
    production->redManaAdded = 0;
    production->greenManaAdded = 0;
    production->blueManaAdded = 0;
    production->whiteManaAdded = 0;
    production->blackManaAdded = 0;
}