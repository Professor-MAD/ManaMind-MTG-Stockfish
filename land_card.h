#ifndef LAND_CARD_H
#define LAND_CAR_H

#include <stdbool.h>

//Land Meta Data
typedef struct {
    bool isMountain;
    bool isForest;
    bool isIsland;
    bool isPlains;
    bool isSwamp;
} LandMetaData;

//Land Mechanic Basics
typedef struct {
    bool inHand;
    bool inPlay;
    bool inGraveyard;
    bool inLibrary;
    bool isTapped;
} LandMechanicBasics;

//Mana production
typedef struct {
    bool producingMana;
    int RedManaAdded;
    int GreenManaAdded;
    int BlueManaAdded;
    int WhiteManaAdded;
    int BlackManaAdded;
} ManaProduction;

//Basic land struct
typedef struct {
    LandMetaData landMetaData;
    LandMechanicBasics landMechanicBasics;
    ManaProduction manaProduction;
} BasicLand;

#endif