#ifndef SORCERY_CARD_H
#define SORCERY_CARD_H

#include "shared_definitions.h"
#include "effect_definitions.h"

// Sorcery Basics
typedef struct {
    bool inHand;
    bool inGraveyard;
    bool inLibrary;
    bool isExiled;
    bool canFlashback;
    bool canBeCopied;
} SorceryBasics;

// Main Sorcery struct
typedef struct {
    char name[100];
    ColorFlags colors;
    ManaCost manaCost;
    SorceryBasics sorceryBasics;
    DrawEffect drawEffect;
    DiscardEffect discardEffect;
    DestroyEffect destroyEffect;
    DamageEffect damageEffect;
    LifeGainEffect lifeGainEffect;
    RevealEffect revealEffect;
    SearchEffect searchEffect;
    TokenEffect tokenEffect;
    BuffDebuffEffect buffDebuffEffect;
    GameEndEffect gameEndEffect;
    char flavorText[250];
} Sorcery;

#endif
