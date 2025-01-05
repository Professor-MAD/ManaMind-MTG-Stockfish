#ifndef CARDS_H
#define CARDS_H

#include "creature_card.h"
#include "sorcery_card.h"
#include "land_card.h"
#include "enchantment_card.h"
#include "instant_card.h"

// Initialize green cards for green deck
void initializeGrizzlyBears(creatureCard* card);
void initializeLlanowarElves(creatureCard* card);
void initializeGiantGrowth(Instant* card);
void initializeForest(BasicLand* card);
void initializeElementalBond(Enchantment* card);
void initializeBackToNature(Instant* card);
void initializeAvatarOfMight(creatureCard* card);

// Initialize red cards for red deck
void initializeRagingGoblin(creatureCard* card);
void initializeShock(Instant* card);
void initializeBlaze(Sorcery* card);
void initializeBedlam(Enchantment* card);
void initializeMountain(BasicLand* card);
void initializeShivanDragon(creatureCard* card);


#endif