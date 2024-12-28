#ifndef CARD_HELPERS_H
#define CARD_HELPERS_H

#include <stdbool.h>
#include "sorcery_card.h"
#include "creature_card.h"
#include "land_card.h"
#include "enchantment_card.h"

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

// Enchantment Helpers
void resetEnchantmentBasics(EnchantmentBasics* basics);
void resetEquipmentBasics(EquipmentBasics* equipment);
void resetDrawEffect(DrawEffect* effect);
void resetDiscardEffect(DiscardEffect* effect);
void resetDamageEffect(DamageEffect* effect);
void resetLifeGainEffect(LifeGainEffect* effect);
void resetRevealEffect(RevealEffect* effect);
void resetSearchEffect(SearchEffect* effect);
void resetTokenEffect(TokenEffect* effect);
void resetGameEndEffect(GameEndEffect* effect);

// Reset Effects Helpers
void resetLifeGainEffect(LifeGainEffect* effect);
void resetRevealEffect(RevealEffect* effect);
void resetSearchEffect(SearchEffect* effect);
void resetTokenEffect(TokenEffect* effect);
void resetGameEndEffect(GameEndEffect* effect);


#endif
