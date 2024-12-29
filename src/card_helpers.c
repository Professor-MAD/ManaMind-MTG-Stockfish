#include <string.h>
#include "../include/card_helpers.h"
#include "../include/land_card.h"

// Functions used in cards.c to initialize most values to 'nothing' instead of garbage values
// Minimizes risk of unexpected behavior

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

// Reset Enchantment Basics
void resetEnchantmentBasics(EnchantmentBasics* basics) {
    basics->inHand = false;
    basics->inGraveyard = false;
    basics->inLibrary = false;
    basics->isExiled = false;
    basics->canFlashback = false;
    basics->canBeCopied = false;
}

// Reset Draw Effect
void resetDrawEffect(DrawEffect* effect) {
    effect->hasDrawEffect = false;
    effect->drawAmount = 0;
    effect->opponentDrawAmount = 0;
}

// Reset Equipment Basics
void resetEquipmentBasics(EquipmentBasics* equipment) {
    equipment->isEquipment = false;
    equipment->isEquipped = false;
}

// Reset Other Effects
void resetDiscardEffect(DiscardEffect* effect) {
    effect->hasDiscardEffect = false;
    effect->discardAmount = 0;
    effect->opponentDiscardAmount = 0;
}

void resetDamageEffect(DamageEffect* effect) {
    effect->hasDamageEffect = false;
    effect->damageToPlayer = 0;
    effect->damageToOpponent = 0;
    effect->damageToCreatures = 0;
    effect->damageToSingleCreature = 0;
    effect->damageToCreatureTypes = 0;
}

// Reset Destroy Effect
// void resetDestroyEffect(DestroyEffect* effect) {
//     effect->hasDestroyEffect = false;
//     effect->destroysTargetCreature = false;
//     effect->destroysRandomCreature = false;
//     effect->destroysMultipleCreatures = false;

// }

// Reset Life Gain Effect
void resetLifeGainEffect(LifeGainEffect* effect) {
    effect->hasLifeGainEffect = false;
    effect->lifeGainAmount = 0;
    effect->opponentLifeGainAmount = 0;
}

// Reset Reveal Effect
void resetRevealEffect(RevealEffect* effect) {
    effect->hasRevealEffect = false;
    effect->revealOpponentHand = false;
    effect->revealOwnHand = false;
    effect->revealLibraryTopCards = 0;
}

// Reset Search Effect
void resetSearchEffect(SearchEffect* effect) {
    effect->hasSearchEffect = false;
    effect->searchLibrary = false;
    effect->searchGraveyard = false;
    effect->searchExile = false;
}

// Reset Token Effect
void resetTokenEffect(TokenEffect* effect) {
    effect->hasTokenEffect = false;
    effect->tokenCount = 0;
    memset(effect->tokenType, 0, sizeof(effect->tokenType));
}

// Reset Game End Effect
void resetGameEndEffect(GameEndEffect* effect) {
    effect->hasWinCondition = false;
    effect->hasLoseCondition = false;
}
