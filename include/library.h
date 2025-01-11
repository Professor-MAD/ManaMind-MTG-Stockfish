#ifndef LIBRARY_H
#define LIBRARY_H

#include "cards.h"

#define MAX_LIBRARY_SIZE 60
#define MAX_DECK_CARDS 20

// Library is made first
// Deck is made from deck files
// Library is populated by deck cards
// GameCard && Library are friends
// DeckCard && Deck are friends

typedef struct {
    void* cardPointer;
    int cardType;
} GameCard; // AKA "Library Card"

typedef struct {
    void* cardPointer;
    int cardType;
    int count;
} DeckCard;

typedef struct {
    DeckCard cards[MAX_DECK_CARDS];
    int nonBasicLandCardCount;
    BasicLand* landCard;
    int landCount;
} Deck;

typedef struct {
    GameCard cards[MAX_LIBRARY_SIZE];
    int size;
} Library;

void populateLibraryFromDeck(Library* library, Deck* deck);

void shuffleLibrary(Library* library);

void displayLibrary(const Library* library);

#endif
