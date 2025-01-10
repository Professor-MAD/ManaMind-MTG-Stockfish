#ifndef GREEN_DECK_H
#define GREEN_DECK_H

#include "cards.h"
#include "library.h"

// Declare the cards
extern creatureCard grizzlyBears;
extern creatureCard llanowarElves;
extern BasicLand forest;
extern Instant giantGrowth;
extern Enchantment elementalBond;
extern Instant backToNature;
extern creatureCard avatarOfMight;

// Function to initialize the green deck
void initializeGreenDeck(Deck* deck);

#endif // GREEN_DECK_H
