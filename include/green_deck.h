#ifndef GREEN_DECK_H
#define GREEN_DECK_H

#include "cards.h"
#include "library.h"

extern creatureCard grizzlyBears;
extern creatureCard llanowarElves;
extern BasicLand forest;
extern Instant giantGrowth;
extern Enchantment elementalBond;
extern Instant backToNature;
extern creatureCard avatarOfMight;

void initializeGreenDeck(Deck* deck);

#endif
