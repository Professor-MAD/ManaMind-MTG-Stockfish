#ifndef LAND_CARD_H
#define LAND_CAR_H

#include <string.h>
#include <stdbool.h>

typedef struct {
    
    //Land Mechanic Basics
    bool inHand;
    bool inPlay;
    bool inGraveyard;
    bool isTapped;

    //Mana production
    int RedManaAdded;
    int GreenManaAdded;
    int BlueManaAdded;
    int WhiteManaAdded;
    int BlackManaAdded;

} BasicLand;

#endif