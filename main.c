#include <stdio.h>
#include <stdbool.h>
#include "cards.h"
#include "hand.h"

int main(void) {
    // Initialize Hand
    Hand playerHand;
    initializeHand(&playerHand);

    // Initialize Grizzly Bears
    creatureCard grizzlyBears;
    initializeGrizzlyBears(&grizzlyBears);

    // Initialize Llanowar Elves
    creatureCard llanowarElves;
    initializeLlanowarElves(&llanowarElves);

    // Initialize Forest
    BasicLand forest;
    initializeForest(&forest);

    // Initialize Giant Growth
    Sorcery giantGrowth;
    initializeGiantGrowth(&giantGrowth);

    // Add cards to the hand
    addCardToHand(&playerHand, &grizzlyBears, 0);
    addCardToHand(&playerHand, &llanowarElves, 0);
    addCardToHand(&playerHand, &forest, 1);
    addCardToHand(&playerHand, &giantGrowth, 2);
    addCardToHand(&playerHand, &forest, 1);
    addCardToHand(&playerHand, &forest, 1);
    addCardToHand(&playerHand, &forest, 1);

    // Display hand
    displayHand(&playerHand);

    // Discard a a random card
    discardRandomCard(&playerHand);
    displayHand(&playerHand);

    return 0;
}
