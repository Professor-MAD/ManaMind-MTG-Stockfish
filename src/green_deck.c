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
void initializeGreenDeck(void) {
    initializeGrizzlyBears(&grizzlyBears);
    initializeLlanowarElves(&llanowarElves);
    initializeForest(&forest);
    initializeGiantGrowth(&giantGrowth);
    initializeElementalBond(&elementalBond);
    initializeBackToNature(&backToNature);
    initializeAvatarOfMight(&avatarOfMight);
}
