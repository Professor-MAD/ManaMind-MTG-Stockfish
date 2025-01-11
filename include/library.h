#ifndef LIBRARY_H
#define LIBRARY_H

#include "cards.h"

#define MAX_LIBRARY_SIZE 60
#define MAX_DECK_CARDS 20

// Card struct representing a single card in the library
typedef struct {
    void* cardPointer; // Pointer to the actual card (e.g., creature, sorcery)
    int cardType;      // Type of card: 0=creature, 1=land, 2=sorcery, 3=enchantment, etc.
} Card;

// DeckCard struct, representing a card in the deck with a count
typedef struct {
    void* cardPointer; // Pointer to the actual card
    int cardType;      // Type of card
    int count;         // Number of copies of this card
} DeckCard;

// Deck struct, representing a complete deck
typedef struct {
    DeckCard cards[MAX_DECK_CARDS]; // Array of cards with counts
    int cardCount;                 // Number of unique cards in the deck
    BasicLand* landCard;           // Pointer to the land card
    int landCount;                 // Number of lands in the deck
} Deck;

// Library struct, representing the player's library
typedef struct {
    Card cards[MAX_LIBRARY_SIZE]; // Array of cards in the library
    int size;                     // Current size of the library
} Library;

// Populate a library with a specific deck
void populateLibraryFromDeck(Library* library, Deck* deck);

// Shuffle the library
void shuffleLibrary(Library* library);

// Display the library's contents
void displayLibrary(const Library* library);

#endif // LIBRARY_H
