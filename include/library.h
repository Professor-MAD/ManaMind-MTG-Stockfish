#ifndef LIBRARY_H
#define LIBRARY_H

#include "cards.h"

#define MAX_LIBRARY_SIZE 60

typedef struct {
    void* cardPointer; // Pointer to the card
    int cardType;      // Type of card: 0=creature, 1=land, 2=sorcery, 3=enchantment, etc.
} Card;

typedef struct {
    Card nonLandCards[20]; // Array of non-land cards (duplicates added in populate)
    Card landCard;         // Single land card type
    int nonLandCardCount;  // Number of non-land card types
} Deck;

typedef struct {
    Card cards[MAX_LIBRARY_SIZE]; // Array of cards
    int size;                     // Current size of the library
} Library;

// Shuffle the library
void shuffleLibrary(Library* library);

// Display the library's contents
void displayLibrary(const Library* library);

// Populate a library with a specific deck
void populateLibraryFromDeck(Library* library, Deck* deck);

#endif // LIBRARY_H
