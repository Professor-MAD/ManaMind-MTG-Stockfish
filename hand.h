#ifndef HAND_H
#define HAND_H

#include <stdbool.h>

#define MAX_HAND_SIZE 10

typedef struct {
    void* cards[MAX_HAND_SIZE];
    int currentSize;
    int cardTypes[MAX_HAND_SIZE];
} Hand;

// Initialize Hand
void initializeHand(Hand* hand);

// Add card to hand
bool addCardToHand(Hand* hand, void* card, int cardType); 

// Remove a card from hand by index
bool removeCardFromHand(Hand* hand, int index);

// Remove a card at random
bool discardRandomCard(Hand* hand);

// Display the hand
void displayHand(const Hand* hand);

#endif