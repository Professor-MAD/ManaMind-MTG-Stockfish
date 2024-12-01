#ifndef CREATURE_CARD_H
#define CREATURE_CARD_H

#include <stdbool.h>
#include <stdint.h> // For bitmask enums if needed

// Enum for colors (bitmask)
typedef enum {
    COLOR_RED    = 1 << 0,  // 00001
    COLOR_GREEN  = 1 << 1,  // 00010
    COLOR_BLUE   = 1 << 2,  // 00100
    COLOR_WHITE  = 1 << 3,  // 01000
    COLOR_BLACK  = 1 << 4,  // 10000
    COLOR_ARTIFACT = 1 << 5 // Artifact, no specific color
} ColorFlags;

// Enum for card types
typedef enum {
    TYPE_CREATURE,
    TYPE_ARTIFACT,
    TYPE_ENCHANTMENT,
    TYPE_SORCERY,
    TYPE_INSTANT,
    TYPE_PLANESWALKER
} CardType;

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

//Unblockables
typedef struct {
    bool isUnblockable;
    bool blockableByType;
    bool blockableByLegend;
} Unblockables;

// Main creature card struct
typedef struct {
    // Metadata
    char name[100];      
    uint8_t colors;       // Use ColorFlags (bitmask for multiple colors)
    CardType type;        

    // Mana cost
    ManaCost manaCost;

    // Power and Toughness
    int power;
    int toughness;
    bool isPowerX;        // Variable power (e.g., */2)
    bool isToughnessX;    // Variable toughness (e.g., 2/*)

    // Flavor text
    char flavorText[250];

    // Abilities
    Abilities abilities;
    DamageAbilities damageAbilities;
    ManaGeneration manaGeneration;
    Unblockables unblockableVarieties;

} creatureCard;

#endif
