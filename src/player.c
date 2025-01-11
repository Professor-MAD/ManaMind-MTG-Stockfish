#include <stdio.h>
#include <string.h>
#include "../include/player.h"

// Initialize Player
void initializePlayer(Player* player) {
    printf("Enter player name: ");
    
    if (fgets(player->playerBasics.name, sizeof(player->playerBasics.name), stdin)) {
        size_t length = strlen(player->playerBasics.name);
        if (length > 0 && player->playerBasics.name[length - 1] == '\n') {
            player->playerBasics.name[length - 1] = '\0';
        }
    } else {
        printf("Error reading name. Setting default name.\n");
        strncpy_s(player->playerBasics.name, sizeof(player->playerBasics.name), "Player", sizeof("Player") - 1);
        player->playerBasics.name[sizeof(player->playerBasics.name) - 1] = '\0';
    }

    // Initialize other fields
    player->playerBasics.lifeTotal = 20;
    player->playerBasics.isTheirTurn = false;
    player->playerBasics.isRespondingWith = false;

    // Initialize PlayerPilesInfo
    player->playerPilesInfo.librarySize = 0;
    player->playerPilesInfo.graveyardSize = 0;
    player->playerPilesInfo.handSize = 0;

    // Initialize PlayerManaInfo
    player->playerManaInfo.greenMana = 0;
    player->playerManaInfo.redMana = 0;
    player->playerManaInfo.blueMana = 0;
    player->playerManaInfo.whiteMana = 0;
    player->playerManaInfo.blackMana = 0;
    player->playerManaInfo.colorlessMana = 0;

    // Initialize BattlefieldInfo
    player->battlefieldInfo.hasCreaturesInPlay = false;
    player->battlefieldInfo.creaturesInPlay = 0;
    memset(player->battlefieldInfo.sharedCreatureTypes, 0, sizeof(player->battlefieldInfo.sharedCreatureTypes));
    memset(player->battlefieldInfo.sharedCreatureTypeCounts, 0, sizeof(player->battlefieldInfo.sharedCreatureTypeCounts));
    player->battlefieldInfo.sharedCreatureColors = 0;
    player->battlefieldInfo.plusOneCounters = 0;
    player->battlefieldInfo.tokenCount = 0;
    player->battlefieldInfo.hasDeclaredAttackers = false;
    player->battlefieldInfo.numberOfAttackers = 0;
    player->battlefieldInfo.hasDeclaredBlockers = false;
    player->battlefieldInfo.numberOfBlockers = 0;
    player->battlefieldInfo.protectionColors = 0;

    printf("Player %s has been initialized.\n", player->playerBasics.name);
}
