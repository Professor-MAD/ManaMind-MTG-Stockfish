#ifndef GREEN_DECK_H
#define GREEN_DECK_H

#include "cards.h"

// Declare the cards
extern creatureCard grizzlyBears;
extern creatureCard llanowarElves;
extern BasicLand forest;
extern Instant giantGrowth;
extern Enchantment elementalBond;
extern Instant backToNature;

// Function to initialize the green deck
void initializeGreenDeck(void);

#endif // GREEN_DECK_H
