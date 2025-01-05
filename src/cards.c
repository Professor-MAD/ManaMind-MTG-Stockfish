#include <stdio.h>
#include <string.h>
#include "../include/shared_definitions.h"
#include "../include/creature_card.h"
#include "../include/sorcery_card.h"
#include "../include/card_helpers.h"
#include "../include/land_card.h"
#include "../include/enchantment_card.h"
#include "../include/effect_definitions.h"
#include "../include/instant_card.h"

// When initializing cards...remember the mana order:
// total, colorless, green, red, blue, white, black, isXCost;

void initializeGrizzlyBears(creatureCard* card) {
    strcpy_s(card->name, sizeof(card->name), "Grizzly Bears");
    card->colors = COLOR_GREEN;
    card->type = TYPE_CREATURE;
    setManaCost(&card->manaCost, 2, 1, 1, 0, 0, 0, 0, false);
    card->power = 2;
    card->toughness = 2;
    card->isPowerX = false;
    card->isToughnessX = false;
    strcpy_s(card->flavorText, sizeof(card->flavorText), "A ferocious creature of the forest.");
    setDefaultAbilities(&card->abilities);
    card->damageAbilities.hasDamageAbility = false;
    card->manaGeneration.hasManaCreation = false;
    setUnblockables(&card->unblockableVarieties);
}

void initializeLlanowarElves(creatureCard* card) {
    strcpy_s(card->name, sizeof(card->name), "Llanowar Elves");
    card->colors = COLOR_GREEN;
    card->type = TYPE_CREATURE;
    setManaCost(&card->manaCost, 1, 0, 1, 0, 0, 0, 0, false);
    card->power = 1;
    card->toughness = 1;
    card->isPowerX = false;
    card->isToughnessX = false;
    strcpy_s(card->flavorText, sizeof(card->flavorText), "Whenever the Llanowar Elves gather the fruits of their forest, they leave one plant of each type untouched, considering that nature's portion.");
    setDefaultAbilities(&card->abilities);
    card->damageAbilities.hasDamageAbility = false;
    card->manaGeneration.hasManaCreation = true;
    card->manaGeneration.causesTap = true;
    card->manaGeneration.greenMana = 1;
    setUnblockables(&card->unblockableVarieties);
}

void initializeGiantGrowth(Instant* card) {
    strcpy_s(card->name, sizeof(card->name), "Giant Growth");
    card->colors = COLOR_GREEN;
    setManaCost(&card->manaCost, 1, 0, 1, 0, 0, 0, 0, false);
    card->buffDebuffEffect.hasBuffEffect = true;
    card->buffDebuffEffect.buffPower = 3;
    card->buffDebuffEffect.buffToughness = 3;
    strcpy_s(card->flavorText, sizeof(card->flavorText), "Strength of the wild in a single moment.");
}

void initializeForest(BasicLand* card) {
    strcpy_s(card->name, sizeof(card->name), "Forest");
    card->landMetaData.type = LAND_FOREST;
    resetLandMechanics(&card->landMechanicBasics);
    resetManaProduction(&card->manaProduction);
    card->manaProduction.greenManaAdded = 1;
}

void initializeElementalBond(Enchantment* card) {
    strcpy_s(card->name, sizeof(card->name), "Elemental Bond");
    card->colors = COLOR_GREEN;
    setManaCost(&card->manaCost, 3, 2, 1, 0, 0, 0, 0, false);
    // resetEnchantmentBasics(&card->enchantmentBasics);
    // resetEquipmentBasics(&card->equipmentBasics);
    // resetDrawEffect(&card->drawEffect);
    // resetDiscardEffect(&card->discardEffect);
    // resetDamageEffect(&card->damageEffect);
    // resetLifeGainEffect(&card->lifeGainEffect);
    // resetRevealEffect(&card->revealEffect);
    // resetSearchEffect(&card->searchEffect);
    // resetTokenEffect(&card->tokenEffect);
    // resetBuffDebuffEffect(&card->buffDebuffEffect);
    // resetGameEndEffect(&card->gameEndEffect);
    card->drawEffect.hasDrawEffect = true;
    card->drawEffect.drawAmount = 1;
    strcpy_s(card->flavorText, sizeof(card->flavorText), "Whenever a creature you control with power 3 or greater enters, draw a card.");
    //TODO: Connect ability with game logic/battlefield logic
}

void initializeBackToNature(Instant* card) {
    strcpy_s(card->name, sizeof(card->name), "Back to Nature");
    card->colors = COLOR_GREEN;
    setManaCost(&card->manaCost, 2, 1, 1, 0, 0, 0, 0, false);
    card->destroyEffect.hasDestroyEffect = true;
    card->destroyEffect.destroyEnchantment = true; 
    card->destroyEffect.destroyAllEnchantments = true;
    strcpy_s(card->flavorText, sizeof(card->flavorText), "Destroy all enchantments.");
}

void initializeAvatarOfMight(creatureCard* card) {
    strcpy_s(card->name, sizeof(card->name), "Avatar of Might");
    card->colors = COLOR_GREEN;
    setManaCost(&card->manaCost, 8, 6, 2, 0, 0, 0, 0, false);
    card->abilities.hasTrample = true;
    card->power = 8;
    card->toughness = 8;
    //TODO Add secondary ability here...depends on oponent's battlefield creature array int value
}

//TODO Set values for red cards here

void initializeRagingGoblin(creatureCard* card) {
    strcpy_s(card->name, sizeof(card->name), "Raging Goblin");
    card->colors = COLOR_RED;
    setManaCost(&card->manaCost, 1, 0, 0, 1, 0, 0, 0, false);
    card->abilities.hasHaste = true;
    card->power = 1;
    card->toughness = 1;
}

void initializeMountain(BasicLand* card) {
    strcpy_s(card->name, sizeof(card->name), "Mountain");
     card->landMetaData.type = LAND_MOUNTAIN;
    resetLandMechanics(&card->landMechanicBasics);
    resetManaProduction(&card->manaProduction);
    card->manaProduction.redManaAdded = 1;
}

void initializeShock(Instant* card) {
    strcpy_s(card->name, sizeof(card->name), "Shock");
    card->colors = COLOR_RED;
    setManaCost(&card->manaCost, 1, 0, 0, 1, 0, 0, 0, false);
    card->damageEffect.hasDamageEffect = true;
    card->damageEffect.damagetoCreatureOrPlayer = 2;
}

void initializeBlaze(Sorcery* card) {
    int manaPoolBlaze = 3; // PLACEHOLDER...See note below
    strcpy_s(card->name, sizeof(card->name), "Blaze");
    card->colors = COLOR_RED;
    setManaCost(&card->manaCost, 2, 1, 0, 1, 0, 0, 0, true);
    card->damageEffect.hasDamageEffect = true;
    card->damageEffect.damagetoCreatureOrPlayer = manaPoolBlaze; //PLACEHOLDER 3 mana to determine value and casting for now
}

void initializeBedlam(Enchantment* card) {
    strcpy_s(card->name, sizeof(card->name), "Bedlam");
    card->colors = COLOR_RED;
    setManaCost(&card->manaCost, 4, 2, 0, 2, 0, 0, 0, false);
    card->prevention.hasPreventBlocking = true;
    card->prevention.allCreaturesEffected = true;
}

void initializeShivanDragon(creatureCard* card) {
    strcpy_s(card->name, sizeof(card->name), "Shivan Dragon");
    card->colors = COLOR_RED;
    setManaCost(&card->manaCost, 6, 4, 0, 2, 0, 0, 0, false);
    card->abilities.hasFlying = true;
    card->power = 5;
    card->toughness = 5;
}