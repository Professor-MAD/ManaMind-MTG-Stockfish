#include "../include/green_deck.h"

// Declare cards
creatureCard grizzlyBears;
creatureCard llanowarElves;
BasicLand forest;
Instant giantGrowth;
Enchantment elementalBond;
Instant backToNature;
creatureCard avatarOfMight;

// Initialize the green deck
void initializeGreenDeck(Deck* deck) {
    // Initialize individual cards
    initializeGrizzlyBears(&grizzlyBears);
    initializeLlanowarElves(&llanowarElves);
    initializeForest(&forest);
    initializeGiantGrowth(&giantGrowth);
    initializeElementalBond(&elementalBond);
    initializeBackToNature(&backToNature);
    initializeAvatarOfMight(&avatarOfMight);

    // Assign non-land cards
    deck->nonLandCardCount = 4;
    deck->nonLandCards[0] = (Card){&grizzlyBears, 0};
    deck->nonLandCards[1] = (Card){&llanowarElves, 0};
    deck->nonLandCards[2] = (Card){&giantGrowth, 4};
    deck->nonLandCards[3] = (Card){&elementalBond, 3};

    // Assign land card
    deck->landCard = (Card){&forest, 1};
}
