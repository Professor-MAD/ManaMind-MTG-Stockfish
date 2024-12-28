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

// Drawing
typedef struct {
    bool hasDrawEffect;
    int drawAmount;
    int opponentDrawAmount;
} DrawEffect;

// Discarding
typedef struct {
    bool hasDiscardEffect;
    int discardAmount;
    int opponentDiscardAmount;
} DiscardEffect;

// Damage
typedef struct {
    bool hasDamageEffect;
    int damageToPlayer;
    int damageToOpponent;
    int damageToCreatures;
    int damageToSingleCreature;
    int damageToCreatureTypes;
} DamageEffect;

// Life Gain
typedef struct {
    bool hasLifeGainEffect;
    int lifeGainAmount;
    int opponentLifeGainAmount;
} LifeGainEffect;

// Reveal
typedef struct {
    bool hasRevealEffect;
    bool revealOpponentHand;
    bool revealOwnHand;
    int revealLibraryTopCards;
} RevealEffect;

// Search
typedef struct {
    bool hasSearchEffect;
    bool searchLibrary;
    bool searchGraveyard;
    bool searchExile;
} SearchEffect;

// Tokens
typedef struct {
    bool hasTokenEffect;
    int tokenCount;
    char tokenType[50];
} TokenEffect;

// Buff/Debuff
typedef struct {
    bool hasBuffEffect;
    int buffPower;
    int buffToughness;
    bool hasDebuffEffect;
    int debuffPower;
    int debuffToughness;
} BuffDebuffEffect;

// Win/Lose Effects
typedef struct {
    bool hasWinCondition;
    bool hasLoseCondition;
} GameEndEffect;

// Main Sorcery struct
typedef struct {
    char name[100];
    ColorFlags colors;
    ManaCost manaCost;
    SorceryBasics sorceryBasics;
    DrawEffect drawEffect;
    DiscardEffect discardEffect;
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
