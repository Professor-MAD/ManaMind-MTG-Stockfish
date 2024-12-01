#include <stdio.h>
#include <stdbool.h>
#include "creature_card.h"
#include "cards.h"
#include "game_logic.h"
#include "land_card.h"

int main(void) {
    // Initialize Grizzly Bears
    creatureCard grizzlyBears;
    initializeGrizzlyBears(&grizzlyBears);

    // Initialize Llanowar Elves
    creatureCard llanowarElves;
    initializeLlanowarElves(&llanowarElves);

    //Initialize Forest
    BasicLand forest;
    initializeForest(&forest);

    // Player Initialization
    int playerLifeTotal = 20;

    //Mana Pool Intialization

    // Simulate Game Logic
    bool isBlocked = blockingPreventsDamage(grizzlyBears.power, grizzlyBears.toughness);
    int lifeAfterAttack = damageToPlayer(grizzlyBears.power, playerLifeTotal, isBlocked);

    // Print Llanowar Elves Details
    printf("\n--- Card Details ---\n");
    printf("New Card: %s\n", llanowarElves.name);
    printf("Produces Green Mana: %d\n", llanowarElves.manaGeneration.greenMana);
    if (llanowarElves.manaGeneration.causesTap) {
        printf("Creature is Tapped.\n");
    }

    // Print Game Update
    printf("\n--- Game Update ---\n");
    printf("Player's Life after attack: %i\n", lifeAfterAttack);

    //Print Forest Details
    printf("Forest is in play. It taps to produce %i green mana\n", forest.manaProduction.GreenManaAdded);

    return 0;
}
