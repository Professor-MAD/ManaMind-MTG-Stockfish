#include "../include/green_deck.h"

creatureCard grizzlyBears;
creatureCard llanowarElves;
BasicLand forest;
Instant giantGrowth;
Enchantment elementalBond;
Instant backToNature;
creatureCard avatarOfMight;

void initializeGreenDeck(Deck* deck) {
    // Initialize individual cards
    initializeGrizzlyBears(&grizzlyBears);
    initializeLlanowarElves(&llanowarElves);
    initializeForest(&forest);
    initializeGiantGrowth(&giantGrowth);
    initializeElementalBond(&elementalBond);
    initializeBackToNature(&backToNature);
    initializeAvatarOfMight(&avatarOfMight);

    // Populate deck with cards and counts
    deck->cardCount = 6;
    deck->cards[0] = (DeckCard){&grizzlyBears, 0, 4};
    deck->cards[1] = (DeckCard){&llanowarElves, 0, 4};
    deck->cards[2] = (DeckCard){&giantGrowth, 4, 4};
    deck->cards[3] = (DeckCard){&elementalBond, 3, 4};
    deck->cards[4] = (DeckCard){&backToNature, 4, 4};
    deck->cards[5] = (DeckCard){&avatarOfMight, 0, 4};

    // Set land card and count
    deck->landCard = &forest;
    deck->landCount = 36; // 36 Forests to reach 60 total cards
}
