#ifndef CARD_HELPERS_H
#define CARD_HELPERS_H

#include <stdbool.h>
#include "sorcery_card.h"
#include "creature_card.h"
#include "land_card.h"

// Mana Cost Helpers
void setManaCost(ManaCost* manaCost, int total, int colorless, int green, int red, int blue, int white, int black, bool isXCost);

// Abilities Helpers
void setDefaultAbilities(Abilities* abilities);

// Unblockable Helpers
void setUnblockables(Unblockables* unblockableVarieties);

// Sorcery Helpers
void resetSorcery(SorceryBasics* sorcery_mechanics);

// Buff/Debuff Helpers
void resetBuffDebuffEffect(BuffDebuffEffect* buffDebuffEffect);

// Land Helpers
void resetLandMechanics(LandMechanicBasics* mechanics);
void resetManaProduction(ManaProduction* production);

#endif // CARD_HELPERS_H
