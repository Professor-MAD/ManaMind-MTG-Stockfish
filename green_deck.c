#include "green_deck.h"

// Define the cards
creatureCard grizzlyBears;
creatureCard llanowarElves;
BasicLand forest;
Sorcery giantGrowth;

// Function to initialize the green deck
void initializeGreenDeck(void) {
    // Initialize Grizzly Bears
    initializeGrizzlyBears(&grizzlyBears);

    // Initialize Llanowar Elves
    initializeLlanowarElves(&llanowarElves);

    // Initialize Forest
    initializeForest(&forest);

    // Initialize Giant Growth
    initializeGiantGrowth(&giantGrowth);
}
