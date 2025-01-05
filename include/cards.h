#ifndef CARDS_H
#define CARDS_H

#include "creature_card.h"
#include "sorcery_card.h"
#include "land_card.h"
#include "enchantment_card.h"
#include "instant_card.h"

// Functions for initializing cards
void initializeGrizzlyBears(creatureCard* card);
void initializeLlanowarElves(creatureCard* card);
void initializeGiantGrowth(Instant* card);
void initializeForest(BasicLand* card);
void initializeElementalBond(Enchantment* card);
void initializeBackToNature(Instant* card);

//TODO initialize red cards for red deck

#endif