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

    // Print Giant Growth Details
    printf("Giant Growth pumps a creature +%i/+%i until end of turn\n",
           giantGrowth.buffDebuffEffect.buffPower, giantGrowth.buffDebuffEffect.buffToughness);
    printf("It costs %i green mana to play\n", giantGrowth.manaCost.green);

    return 0;
}
