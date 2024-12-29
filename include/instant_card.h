#ifndef INSTANT_CARD_H
#define INSTANT_CARD_H

#include "shared_definitions.h"
#include "effect_definitions.h"

typedef struct {
    bool inHand;
    bool inGraveyard;
    bool inLibrary;
    bool isExiled;
    bool canFlashback;
    bool canBeCopied;
} InstantBasics;

// Main Instant struct
typedef struct {
    char name[100];
    ColorFlags colors;
    ManaCost manaCost;
    InstantBasics instantBasics;
    DrawEffect drawEffect;
    DiscardEffect discardEffect;
    DamageEffect damageEffect;
    DestroyEffect destroyEffect;
    LifeGainEffect lifeGainEffect;
    RevealEffect revealEffect;
    SearchEffect searchEffect;
    TokenEffect tokenEffect;
    BuffDebuffEffect buffDebuffEffect;
    GameEndEffect gameEndEffect;
    char flavorText[250];
} Instant;

#endif