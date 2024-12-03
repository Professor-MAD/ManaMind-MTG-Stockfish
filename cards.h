#ifndef CARDS_H
#define CARDS_H

#include "creature_card.h"
#include "sorcery_card.h"
#include "land_card.h"

// Functions for initializing cards
void initializeGrizzlyBears(creatureCard* card);
void initializeLlanowarElves(creatureCard* card);
void initializeGiantGrowth(Sorcery* card);
void initializeForest(BasicLand* card);

#endif
