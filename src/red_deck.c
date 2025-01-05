#include "../include/red_deck.h"

creatureCard ragingGoblin;
Instant shock;
Sorcery blaze;
Enchantment bedlam;
BasicLand mountain;
creatureCard shivanDragon;

void initializeRedDeck(void) {
    initializeRagingGoblin(&ragingGoblin);
    initializeShock(&shock);
    initializeBlaze(&blaze);
    initializeBedlam(&bedlam);
    initializeMountain(&mountain);
    initializeShivanDragon(&shivanDragon);
}