#ifndef ENCHANTMENT_CARD_H
#define ENCHANTMENT_CARD_H

#include "shared_definitions.h"
#include "effect_definitions.h"

// Enchantment Basics
typedef struct {
    bool inHand;
    bool inGraveyard;
    bool inLibrary;
    bool isExiled;
    bool canFlashback;
    bool canBeCopied;
} EnchantmentBasics;

// Equipment Basics
typedef struct {
    bool isEquipment;
    bool isEquipped;
} EquipmentBasics;

// Main Enchantment struct
typedef struct {
    char name[100];
    ColorFlags colors;
    ManaCost manaCost;
    EnchantmentBasics enchantmentBasics;
    EquipmentBasics equipmentBasics;
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
} Enchantment;

#endif
