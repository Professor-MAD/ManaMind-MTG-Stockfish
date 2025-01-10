#ifndef RED_DECK_H
#define RED_DECK_H

#include "cards.h"
#include "library.h"

// Declare the cards
extern creatureCard ragingGoblin;
extern Instant shock;
extern Sorcery blaze;
extern Enchantment bedlam;
extern BasicLand mountain;
extern creatureCard shivanDragon;

// Function to initialize the red deck
void initializeRedDeck(Deck* deck);

#endif // RED_DECK_H
