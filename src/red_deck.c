#include "../include/red_deck.h"

// Declare cards
creatureCard ragingGoblin;
Instant shock;
Sorcery blaze;
Enchantment bedlam;
BasicLand mountain;
creatureCard shivanDragon;

// Initialize the red deck
void initializeRedDeck(Deck* deck) {
    // Initialize individual cards
    initializeRagingGoblin(&ragingGoblin);
    initializeShock(&shock);
    initializeBlaze(&blaze);
    initializeBedlam(&bedlam);
    initializeMountain(&mountain);
    initializeShivanDragon(&shivanDragon);

    // Assign non-land cards
    deck->nonLandCardCount = 4;
    deck->nonLandCards[0] = (Card){&ragingGoblin, 0};
    deck->nonLandCards[1] = (Card){&shock, 4};
    deck->nonLandCards[2] = (Card){&blaze, 2};
    deck->nonLandCards[3] = (Card){&bedlam, 3};

    // Assign land card
    deck->landCard = (Card){&mountain, 1};
}
