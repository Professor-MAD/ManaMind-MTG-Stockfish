#include "../include/game_logic.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int damageToPlayer(int attackPowerToPlayer, int playerLifeTotal, bool blocked) {
    if (!blocked) {
        playerLifeTotal -= attackPowerToPlayer;
    }
    return playerLifeTotal;
}

bool blockingPreventsDamage(int attackPowerToPlayer, int toughnessOfBlocker) {
    return attackPowerToPlayer <= toughnessOfBlocker;
}

void rollToSeeWhoGoesFirst() {
    srand(time(NULL));
    
    // Player One Rolls
    printf("Player One, press Enter to roll the dice...\n");
    getchar();
    int playerOneRoll = (rand() % 6) + 1;
    printf("Player One Rolled: %i\n", playerOneRoll);

    // Player Two Rolls
    printf("Player Two, press Enter to roll the dice...\n");
    getchar();
    int playerTwoRoll = (rand() % 6) + 1;
    printf("Player Two Rolled: %i\n", playerTwoRoll);

    // Determine who chooses play or draw
    if (playerOneRoll > playerTwoRoll) {
        printf("Player One wins the roll and chooses to play or draw.\n");
    } else if (playerTwoRoll > playerOneRoll) {
        printf("Player Two wins the roll and chooses to play or draw.\n");
    } else {
        printf("It's a tie! Roll again.\n");
        rollToSeeWhoGoesFirst();
    }
}