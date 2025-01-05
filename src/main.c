#include <stdio.h>
#include <stdbool.h>
#include "../include/cards.h"
#include "../include/hand.h"
#include "../include/green_deck.h"
#include "../include/land_card.h"
#include "../include/game_logic.h"

int main(void) {
    // Roll to see who goes first
    rollToSeeWhoGoesFirst();

    // Initialize Player One Hand
    Hand playerOneHand;
    initializeHand(&playerOneHand);

    // Initialize Player Two Hand
    Hand playerTwoHand;
    initializeHand(&playerTwoHand);

    // Initialize Green Deck
    initializeGreenDeck();

    // Add cards to Player One hand
    addCardToHand(&playerOneHand, &grizzlyBears, 0);
    addCardToHand(&playerOneHand, &llanowarElves, 0);
    addCardToHand(&playerOneHand, &elementalBond, 3);
    addCardToHand(&playerOneHand, &giantGrowth, 4);
    addCardToHand(&playerOneHand, &backToNature, 4);
    addCardToHand(&playerOneHand, &forest, 1);
    addCardToHand(&playerOneHand, &forest, 1);

    // Add cards to Player Two hand
    addCardToHand(&playerTwoHand, &grizzlyBears, 0);

    // Display hand
    displayHand(&playerOneHand);
    displayHand(&playerTwoHand);

    // // Discard a random card
    // discardRandomCard(&playerOneHand);
    // displayHand(&playerOneHand);

    return 0;
}
