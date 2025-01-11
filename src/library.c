#include <stdio.h>
#include <stdlib.h>
#include "../include/cards.h"
#include "../include/library.h"

// Populate a library from a deck
void populateLibraryFromDeck(Library* library, Deck* deck) {
    library->size = 0;

    // Add non-land cards based on their counts
    for (int i = 0; i < deck->cardCount; i++) {
        DeckCard deckCard = deck->cards[i];
        for (int j = 0; j < deckCard.count; j++) {
            if (library->size >= MAX_LIBRARY_SIZE) {
                printf("Library is full. Cannot add more cards.\n");
                return;
            }
            library->cards[library->size++] = (Card){deckCard.cardPointer, deckCard.cardType};
        }
    }

    // Add land cards to fill up the library to 60 cards
    for (int i = 0; i < deck->landCount && library->size < MAX_LIBRARY_SIZE; i++) {
        library->cards[library->size++] = (Card){deck->landCard, 1}; // Land card type is 1
    }
}

// Shuffle the library
void shuffleLibrary(Library* library) {
    for (int i = library->size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = library->cards[i];
        library->cards[i] = library->cards[j];
        library->cards[j] = temp;
    }
    printf("Library shuffled.\n");
}

// Display the library contents
void displayLibrary(const Library* library) {
    printf("Library contains %d cards:\n", library->size);
    for (int i = 0; i < library->size; i++) {
        printf("Card %d: Type=%d, Pointer=%p\n", i + 1, library->cards[i].cardType, library->cards[i].cardPointer);
    }
}
