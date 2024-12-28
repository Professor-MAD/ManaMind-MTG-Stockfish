#include <stdio.h>
#include <stdbool.h>
#include "../include/cards.h"
#include "../include/hand.h"
#include "../include/green_deck.h"
#include "../include/land_card.h"

int main(void) {
    // Initialize Hand
    Hand playerHand;
    initializeHand(&playerHand);

    // Initialize Green Deck
    initializeGreenDeck();

    // Add cards to the hand
    addCardToHand(&playerHand, &grizzlyBears, 0);
    addCardToHand(&playerHand, &llanowarElves, 0);
    addCardToHand(&playerHand, &elementalBond, 3);
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
