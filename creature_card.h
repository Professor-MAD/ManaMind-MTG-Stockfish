#ifndef CREATURE_CARD_H
#define CREATURE_CARD_H

#include "shared_definitions.h"

// Enum for card types
typedef enum {
    TYPE_CREATURE,
    TYPE_ARTIFACT,
    TYPE_ENCHANTMENT,
    TYPE_SORCERY,
    TYPE_INSTANT,
    TYPE_PLANESWALKER
} CardType;

// Struct for abilities
typedef struct {
    bool hasFlying;
    bool hasHaste;
    bool hasFirstStrike;
    bool hasTrample;
    bool hasVigilance;
    bool hasDrawAbility;
    int drawCards;      
    int discardCards;   
    bool hasUnblockable;
    bool hasFear;
    bool hasLandwalk;
} Abilities;

// Struct for damage-related abilities
typedef struct {
    bool hasDamageAbility;
    int damageToSelf;
    int damageToTargetCreature;
    int damageToTargetPlayer;
    bool causesTap;
    bool targetsFlying;
} DamageAbilities;

// Struct for mana generation
typedef struct {
    bool hasManaCreation;
    bool causesTap;
    int redMana;
    int greenMana;
    int blueMana;
    int whiteMana;
    int blackMana;
} ManaGeneration;

// Unblockables
typedef struct {
    bool isUnblockable;
    bool blockableByType;
    bool blockableByLegend;
} Unblockables;

// Main creature card struct
typedef struct {
    char name[100];
    uint8_t colors;  // Use ColorFlags (bitmask for multiple colors)
    CardType type; 
    ManaCost manaCost;
    int power;
    int toughness;
    bool isPowerX;  // Variable power (e.g., */2)
    bool isToughnessX; 
    char flavorText[250];
    Abilities abilities;
    DamageAbilities damageAbilities;
    ManaGeneration manaGeneration;
    Unblockables unblockableVarieties;
} creatureCard;

#endif
