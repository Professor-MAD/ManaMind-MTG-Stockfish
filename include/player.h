#ifndef PLAYER_H
#define PLAYER_H

#include <stdbool.h>
#include "shared_definitions.h"

typedef struct {
    char name[50];
    int lifeTotal;
    bool isTheirTurn;
    bool isRespondingWith;
} PlayerBasics;

typedef struct {
    int librarySize;
    int graveyardSize;
    void* library[60];
    void* graveyard[60];
    int handSize;
} PlayerPilesInfo;

typedef struct {
    int greenMana;
    int redMana;
    int blueMana;
    int whiteMana;
    int blackMana;
    int colorlessMana;
    bool hasLandsInPlay;
    int landsInPlay;
    int mountainsInPlay;
    int forestsInPlay;
    int islandsInPlay;
    int swampsInPlay;
    int plainsInPlay;
} PlayerManaInfo;

typedef struct {
    bool hasCreaturesInPlay;
    int creaturesInPlay;
    char sharedCreatureTypes[10][20];
    int sharedCreatureTypeCounts[10];
    ColorFlags sharedCreatureColors;
    int plusOneCounters;
    int tokenCount;
    bool hasDeclaredAttackers;
    int numberOfAttackers;
    bool hasDeclaredBlockers;
    int numberOfBlockers;
    ColorFlags protectionColors;
} BattlefieldInfo;

typedef struct {
    PlayerBasics playerBasics;
    PlayerPilesInfo playerPilesInfo;
    PlayerManaInfo playerManaInfo;
    BattlefieldInfo battlefieldInfo;
} Player;

// Initialize Player
void initializePlayer(Player* player);

#endif
