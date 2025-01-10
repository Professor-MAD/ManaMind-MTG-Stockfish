#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/cards.h"
#include "../include/library.h"

// Populate a library from a deck
void populateLibraryFromDeck(Library* library, Deck* deck) {
    library->size = 0;

    // Add non-land cards (up to 4 duplicates)
    for (int i = 0; i < deck->nonLandCardCount; i++) {
        for (int j = 0; j < 4; j++) {
            if (library->size >= MAX_LIBRARY_SIZE) {
                printf("Library is full. Cannot add more cards.\n");
                return;
            }
            library->cards[library->size++] = deck->nonLandCards[i];
        }
    }

    // Add land cards to fill up the library to 60 cards
    while (library->size < MAX_LIBRARY_SIZE) {
        library->cards[library->size++] = deck->landCard;
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
        printf("Card %d: %p\n", i + 1, library->cards[i].cardPointer);
    }
}
