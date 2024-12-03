#ifndef SHARED_DEFINITIONS_H
#define SHARED_DEFINITIONS_H

#include <stdint.h>
#include <stdbool.h>

// Enum for colors (bitmask)
typedef enum {
    COLOR_RED    = 1 << 0,  // 00001
    COLOR_GREEN  = 1 << 1,  // 00010
    COLOR_BLUE   = 1 << 2,  // 00100
    COLOR_WHITE  = 1 << 3,  // 01000
    COLOR_BLACK  = 1 << 4,  // 10000
} ColorFlags;

// Struct for mana cost
typedef struct {
    int total;
    int colorless;
    int red;
    int green;
    int blue;
    int white;
    int black;
    bool isXCost; // Variable mana cost
} ManaCost;

#endif // SHARED_DEFINITIONS_H
