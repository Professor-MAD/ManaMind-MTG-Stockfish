#include <stdio.h>
#include <stdbool.h>
#include "cards.h"
#include "hand.h"
#include "green_deck.h"

int main(void) {
    // Initialize Hand
    Hand playerHand;
    initializeHand(&playerHand);

    // Initialize Green Deck
    initializeGreenDeck();

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

    // Discard a random card
    discardRandomCard(&playerHand);
    displayHand(&playerHand);

    return 0;
}
