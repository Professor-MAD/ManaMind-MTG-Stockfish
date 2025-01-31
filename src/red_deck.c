#include "../include/red_deck.h"

// Declare cards
creatureCard ragingGoblin;
Instant shock;
Sorcery blaze;
Enchantment bedlam;
BasicLand mountain;
creatureCard shivanDragon;


void initializeRedDeck(Deck* deck) {

    initializeRagingGoblin(&ragingGoblin);
    initializeShock(&shock);
    initializeBlaze(&blaze);
    initializeBedlam(&bedlam);
    initializeMountain(&mountain);
    initializeShivanDragon(&shivanDragon);

    deck->nonBasicLandCardCount = 5;
    deck->cards[0] = (DeckCard){&ragingGoblin, 0, 4};
    deck->cards[1] = (DeckCard){&shock, 4, 4};
    deck->cards[2] = (DeckCard){&blaze, 2, 4};
    deck->cards[3] = (DeckCard){&bedlam, 3, 4};
    deck->cards[4] = (DeckCard){&shivanDragon, 0, 4};

    deck->landCard = &mountain;
    deck->landCount = 40;
}
