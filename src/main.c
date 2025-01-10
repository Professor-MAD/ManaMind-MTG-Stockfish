#include <stdio.h>
#include <stdbool.h>
#include "../include/cards.h"
#include "../include/hand.h"
#include "../include/green_deck.h"
#include "../include/red_deck.h"
#include "../include/land_card.h"
#include "../include/game_logic.h"
#include "../include/ascii_art.h"
#include "../include/player.h"
#include "../include/library.h"

int main(void) {
    // Intro
    displayAsciiBrain();
    displayManaMindAscii();

    // Make Players
    Player player1;
    initializePlayer(&player1);

    Player player2;
    initializePlayer(&player2);

    // Roll to see who goes first
    rollToSeeWhoGoesFirst();

    // Initialize libraries for players
    Library playerOneLibrary;
    Library playerTwoLibrary;

    // Initialize decks
    Deck greenDeck;
    Deck redDeck;
    initializeGreenDeck(&greenDeck);
    initializeRedDeck(&redDeck);

    // Populate player libraries from decks
    populateLibraryFromDeck(&playerOneLibrary, &greenDeck);
    populateLibraryFromDeck(&playerTwoLibrary, &redDeck);

    // Shuffle libraries
    shuffleLibrary(&playerOneLibrary);
    shuffleLibrary(&playerTwoLibrary);

    // Initialize hands
    Hand playerOneHand;
    initializeHand(&playerOneHand);
    Hand playerTwoHand;
    initializeHand(&playerTwoHand);

    // Draw initial hands
    drawCardsFromLibrary(&playerOneHand, &playerOneLibrary, 7);
    drawCardsFromLibrary(&playerTwoHand, &playerTwoLibrary, 7);

    // Display hands
    displayHand(&playerOneHand);
    displayHand(&playerTwoHand);

    return 0;
}
