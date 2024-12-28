#ifndef EFFECT_DEFINITIONS_H
#define EFFECT_DEFINITIONS_H

#include <stdbool.h>

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

#endif
