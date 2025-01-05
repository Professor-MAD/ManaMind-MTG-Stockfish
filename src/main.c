#include <stdio.h>
#include <stdbool.h>
#include "../include/cards.h"
#include "../include/hand.h"
#include "../include/green_deck.h"
#include "../include/red_deck.h"
#include "../include/land_card.h"
#include "../include/game_logic.h"
#include "../include/ascii_art.h"

int main(void) {
    // Intro
     displayAsciiArt();

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

    // Initialize Red Deck
    initializeRedDeck();

    // Add cards to Player One hand
    addCardToHand(&playerOneHand, &grizzlyBears, 0);
    addCardToHand(&playerOneHand, &llanowarElves, 0);
    addCardToHand(&playerOneHand, &elementalBond, 3);
    addCardToHand(&playerOneHand, &giantGrowth, 4);
    addCardToHand(&playerOneHand, &backToNature, 4);
    addCardToHand(&playerOneHand, &forest, 1);
    addCardToHand(&playerOneHand, &avatarOfMight, 0);

    // Add cards to Player Two hand
    addCardToHand(&playerTwoHand, &ragingGoblin, 0);
    addCardToHand(&playerTwoHand, &shivanDragon, 0);
    addCardToHand(&playerTwoHand, &shock, 4);
    addCardToHand(&playerTwoHand, &blaze, 2);
    addCardToHand(&playerTwoHand, &bedlam, 3);
    addCardToHand(&playerTwoHand, &mountain, 1);
    addCardToHand(&playerTwoHand, &mountain, 1);

    // Display hand
    displayHand(&playerOneHand);
    displayHand(&playerTwoHand);

    // // Discard a random card
    // discardRandomCard(&playerOneHand);
    // displayHand(&playerOneHand);

    return 0;
}
