#ifndef LAND_CARD_H
#define LAND_CARD_H

#include <stdbool.h>

// Enum for Land Types
typedef enum {
    LAND_FOREST,
    LAND_ISLAND,
    LAND_MOUNTAIN,
    LAND_PLAINS,
    LAND_SWAMP
} LandType;

// Land Meta Data
typedef struct {
    LandType type;
} LandMetaData;

// Land Mechanic Basics
typedef struct {
    bool inHand;
    bool inPlay;
    bool inGraveyard;
    bool inLibrary;
    bool isTapped;
} LandMechanicBasics;

// Mana Production
typedef struct {
    bool producingMana;
    int redManaAdded;
    int greenManaAdded;
    int blueManaAdded;
    int whiteManaAdded;
    int blackManaAdded;
} ManaProduction;

// Basic Land Struct
typedef struct {
    char name[100];
    LandMetaData landMetaData;
    LandMechanicBasics landMechanicBasics;
    ManaProduction manaProduction;
} BasicLand;

#endif
