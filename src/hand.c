#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../include/cards.h"
#include "../include/hand.h"
#include "../include/library.h"

// Initialize Hand
void initializeHand(Hand* hand) {
    hand->currentSize = 0;
    for (int i = 0; i < MAX_HAND_SIZE; i++) {
        hand->cards[i] = NULL; // Initialize all slots to NULL
    }
}

// Add card to hand with type
bool addCardToHand(Hand* hand, void* card, int cardType) {
    if (hand->currentSize >= MAX_HAND_SIZE) {
        printf("Hand is at maximum size! Cannot add more cards.\n");
        return false;
    }
    hand->cards[hand->currentSize] = card;
    hand->cardTypes[hand->currentSize] = cardType; // Set the card type
    hand->currentSize++;
    return true;
}

// Draw cards from a library into the hand
bool drawCardsFromLibrary(Hand* hand, Library* library, int numCards) {
    for (int i = 0; i < numCards; i++) {
        if (library->size == 0) {
            printf("Library is empty. Cannot draw more cards.\n");
            return false;
        }
        Card card = library->cards[--library->size]; // Remove top card from library
        if (!addCardToHand(hand, card.cardPointer, card.cardType)) {
            printf("Failed to add card to hand during draw.\n");
            return false;
        }
    }
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
        hand->cardTypes[i] = hand->cardTypes[i + 1];
    }
    hand->cards[hand->currentSize - 1] = NULL;
    hand->cardTypes[hand->currentSize - 1] = -1;
    hand->currentSize--;
    return true;
}

// Remove a card at random
bool discardRandomCard(Hand* hand) {
    if (hand->currentSize == 0) {
        printf("Hand is empty! No cards to discard.\n");
        return false;
    }

    // Seed the random number generator once
    static bool seeded = false;
    if (!seeded) {
        srand(time(NULL));
        seeded = true;
    }

    int randomIndex = rand() % hand->currentSize;
    printf("Removing card at index %d...\n", randomIndex + 1);
    return removeCardFromHand(hand, randomIndex);
}

// Display the hand with multiple card types
void displayHand(const Hand* hand) {
    printf("Hand contains %d cards:\n", hand->currentSize);
    for (int i = 0; i < hand->currentSize; i++) {
        if (hand->cards[i] != NULL) {
            switch (hand->cardTypes[i]) {
                case 0: {
                    creatureCard* card = (creatureCard*)hand->cards[i];
                    printf("Card %d: %s (Creature)\n", i + 1, card->name);
                    break;
                }
                case 1: {
                    BasicLand* card = (BasicLand*)hand->cards[i];
                    printf("Card %d: Basic Land (Type: %s)\n", i + 1, card->name);
                    break;
                }
                case 2: {
                    Sorcery* card = (Sorcery*)hand->cards[i];
                    printf("Card %d: %s (Sorcery)\n", i + 1, card->name);
                    break;
                }
                case 3: {
                    Enchantment* card = (Enchantment*)hand->cards[i];
                    printf("Card %d: %s (Enchantment)\n", i + 1, card->name);
                    break;
                }
                case 4: {
                    Instant* card = (Instant*)hand->cards[i];
                    printf("Card %d: %s (Instant)\n", i + 1, card->name);
                    break;
                }
                default:
                    printf("Card %d: Unknown type\n", i + 1);
            }
        }
    }
}
