#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../include/cards.h"
#include "../include/hand.h"


// Initialize Hand
void initializeHand(Hand* hand) {
    hand->currentSize = 0;
    for (int i = 0; i < MAX_HAND_SIZE; i++) {
        hand->cards[i] = NULL; // Initialize all slots to NULL for starting out
    }
}

// Add card to hand with type
bool addCardToHand(Hand* hand, void* card, int cardType) {
    if (hand->currentSize >= MAX_HAND_SIZE) {
        printf("Hand is at 10! Program limit reached.\n");
        return false;
    }
    hand->cards[hand->currentSize] = card;
    hand->cardTypes[hand->currentSize] = cardType; // Set the card type
    hand->currentSize++;
    return true;
}


// Remove a card from hand by index
bool removeCardFromHand(Hand* hand, int index) {
    if (index < 0 || index >= hand->currentSize) {
        printf("Invalid index! Cannot remove card.\n");
        return false;
    }

    // Print debug information for clarity
    printf("Removing card at index %d...\n", index + 1);

    // Shift all elements after `index` one position to the left
    for (int i = index; i < hand->currentSize - 1; i++) {
        hand->cards[i] = hand->cards[i + 1];
        hand->cardTypes[i] = hand->cardTypes[i + 1];
    }

    // Clear the last element
    hand->cards[hand->currentSize - 1] = NULL;
    hand->cardTypes[hand->currentSize - 1] = -1;

    // Decrement the size of the hand
    hand->currentSize--;

    return true;
}


// Remove a card at random
bool discardRandomCard(Hand* hand) {
    if (hand->currentSize == 0) {
        printf("Hand is empty! No cards to discard.\n");
        return false;
    }

    // Seed the random number generator only once
    static bool seeded = false;
    if (!seeded) {
        srand(time(NULL));
        seeded = true;
    }

    int randomIndex = rand() % hand->currentSize;
    // printf("Removing card at index %d...\n", randomIndex + 1); // Debug info
    return removeCardFromHand(hand, randomIndex);
}


// Display the hand with multiple card types
void displayHand(const Hand* hand) {
    printf("Hand contains %d cards:\n", hand->currentSize);
    for (int i = 0; i < hand->currentSize; i++) {
        if (hand->cards[i] != NULL) {
            switch (hand->cardTypes[i]) {
                case 0: { // creatureCard
                    creatureCard* card = (creatureCard*)hand->cards[i];
                    printf("Card %d: %s (Creature)\n", i + 1, card->name);
                    break;
                }
                case 1: { // BasicLand
                    BasicLand* card = (BasicLand*)hand->cards[i];
                    printf("Card %d: Basic Land (Type: %s)\n", i + 1, card->name);
                    break;
                }
                case 2: { // Sorcery
                    Sorcery* card = (Sorcery*)hand->cards[i];
                    printf("Card %d: %s (Sorcery)\n", i + 1, card->name);
                    break;
                }
                default:
                    printf("Card %d: Unknown type\n", i + 1);
            }
        }
    }
}
