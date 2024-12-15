#include <stdio.h>
#include "hand.h"
#include <stdbool.h>
#include <stdlib.h>


// Initialize Hand
void initializeHand(Hand* hand) {
    hand->currentSize = 0;
    for (int i = 0; i < MAX_HAND_SIZE; i++) {
        hand->cards[i] = NULL; // Initialize all slots to NULL
    }
}

// Add card to hand
bool addCardToHand(Hand* hand, void* card) {
    if (hand->currentSize >= MAX_HAND_SIZE) {
        printf("Hand is at 10! Program limit reached.\n");
        return false;
    }
    hand->cards[hand->currentSize] = card;
    hand->currentSize++;
    return true;
}

// Remove a card from hand by index
bool removeCardFromHand(Hand* hand, int index) {
    if (index < 0 || index >= hand->currentSize) {
        printf("Invalid index! Cannot remove card.\n");
        return false;
    }
    for (int i = index; i < hand->currentSize - 1; i++) {
        hand->cards[i] = hand->cards[i + 1];
    }
    hand->cards[hand->currentSize -1 ] = NULL; //Clear the last spot
    hand->currentSize--;
    return true;
}

// Remove a card at random
bool discardRandomCard(Hand* hand) {
    if (hand->currentSize == 0) {
        printf("Hand is empty! No cards to discard.\n");
        return false;
    }
    int randomIndex = rand() % hand->currentSize;
    return removeCardFromHand(hand, randomIndex); //Call Remove card from hand function if not false
}

// Display the hand
void displayHand(const Hand* hand) {
    printf("Hand contains %d cards:\n", hand->currentSize);
    for (int i = 0; i < hand->currentSize; i++) {
        printf("Card %d: %p\n", i, hand->cards[i]);
    }
}