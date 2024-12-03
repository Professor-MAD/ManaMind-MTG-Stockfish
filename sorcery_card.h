#ifndef SORCERY_CARD_H
#define SORCERY_CARD_H

#include "shared_definitions.h"

// Sorcery Basics
typedef struct {
    bool inHand;
    bool inGraveyard;
    bool inLibrary;
    bool isExiled;
    bool canFlashback;
    bool canBeCopied;
} SorceryBasics;

// Buff/Debuff
typedef struct {
    bool hasBuffEffect;
    int buffPower;
    int buffToughness;
    bool hasDebuffEffect;
    int debuffPower;
    int debuffToughness;
} BuffDebuffEffect;

// Main Sorcery struct
typedef struct {
    char name[100];
    ColorFlags colors;
    ManaCost manaCost;
    SorceryBasics sorceryBasics;
    BuffDebuffEffect buffDebuffEffect;
    char flavorText[250];
} Sorcery;

#endif
