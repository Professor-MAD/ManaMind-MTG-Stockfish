#ifndef RED_DECK_H
#define RED_DECK_H

#include "cards.h"
#include "library.h"

extern creatureCard ragingGoblin;
extern Instant shock;
extern Sorcery blaze;
extern Enchantment bedlam;
extern BasicLand mountain;
extern creatureCard shivanDragon;

void initializeRedDeck(Deck* deck);

#endif
