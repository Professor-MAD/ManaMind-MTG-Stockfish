#include <stdio.h>
#include <stdbool.h>
#include "cards.h"

int main(void) {
    // Initialize Grizzly Bears
    creatureCard grizzlyBears;
    initializeGrizzlyBears(&grizzlyBears);

    // Initialize Llanowar Elves
    creatureCard llanowarElves;
    initializeLlanowarElves(&llanowarElves);

    // Initialize Forest
    BasicLand forest;
    initializeForest(&forest);

    // Initialize Giant Growth
    Sorcery giantGrowth;
    initializeGiantGrowth(&giantGrowth);

    // Player One's Hand (Array of Creature Cards)
    creatureCard playerOneHand[10];
    playerOneHand[0] = grizzlyBears;
    playerOneHand[1] = llanowarElves;

    // Player Two's Hand (Struct to Support Multiple Types)
    typedef struct {
        BasicLand* basicLand;
        Sorcery* sorcery;
        creatureCard* creature;
    } CardSlot;

    CardSlot playerTwoHand[10];
    playerTwoHand[0].basicLand = &forest;
    playerTwoHand[1].sorcery = &giantGrowth;
    playerTwoHand[2].creature = &llanowarElves;

    // Print Player One's Hand
    printf("Card 1 in Player One's hand is %s. Its power is %i and its toughness is also %i\n",
           playerOneHand[0].name, playerOneHand[0].power, playerOneHand[0].toughness);

    // Print Player Two's Hand
    printf("Player Two has a basic land: %s, a sorcery: %s, and a creature: %s\n",
           playerTwoHand[0].basicLand->name,
           playerTwoHand[1].sorcery->name,
           playerTwoHand[2].creature->name);

    return 0;
}
