#include "cards.h"
#include "land_card.h"
#include <string.h>

// Helper function to initialize mana cost
void setManaCost(ManaCost* manaCost, int total, int colorless, int green, int red, int blue, int white, int black, bool isXCost) {
    manaCost->total = total;
    manaCost->colorless = colorless;
    manaCost->green = green;
    manaCost->red = red;
    manaCost->blue = blue;
    manaCost->white = white;
    manaCost->black = black;
    manaCost->isXCost = isXCost;
}

// Helper function to set default abilities
void setDefaultAbilities(Abilities* abilities) {
    abilities->hasFlying = false;
    abilities->hasHaste = false;
    abilities->hasTrample = false;
    abilities->hasFirstStrike = false;
    abilities->hasVigilance = false;
}

// Helper function to set unblockable properties
void setUnblockables(Unblockables* unblockableVarieties) {
    unblockableVarieties->isUnblockable = false;
    unblockableVarieties->blockableByType = false;
    unblockableVarieties->blockableByLegend = false;
}

// Land Helper Functions
void resetLandMechanics(LandMechanicBasics* mechanics) {
    mechanics->inHand = false;
    mechanics->inPlay = false;
    mechanics->inGraveyard = false;
    mechanics->inLibrary = true;
    mechanics->isTapped = false;
}

void resetManaProduction(ManaProduction* production) {
    production->producingMana = false;
    production->redManaAdded = 0;
    production->greenManaAdded = 0;
    production->blueManaAdded = 0;
    production->whiteManaAdded = 0;
    production->blackManaAdded = 0;
}

// Grizzly Bears initialization
void initializeGrizzlyBears(creatureCard* card) {
    strcpy(card->name, "Grizzly Bears");
    card->colors = COLOR_GREEN;
    card->type = TYPE_CREATURE;

    setManaCost(&card->manaCost, 2, 1, 1, 0, 0, 0, 0, false);
    card->power = 2;
    card->toughness = 2;
    card->isPowerX = false;
    card->isToughnessX = false;

    strcpy(card->flavorText, "A ferocious creature of the forest.");

    setDefaultAbilities(&card->abilities);

    card->damageAbilities.hasDamageAbility = false;
    card->manaGeneration.hasManaCreation = false;

    setUnblockables(&card->unblockableVarieties);
}

// Llanowar Elves initialization
void initializeLlanowarElves(creatureCard* card) {
    strcpy(card->name, "Llanowar Elves");
    card->colors = COLOR_GREEN;
    card->type = TYPE_CREATURE;

    setManaCost(&card->manaCost, 1, 0, 1, 0, 0, 0, 0, false);
    card->power = 1;
    card->toughness = 1;
    card->isPowerX = false;
    card->isToughnessX = false;

    strcpy(card->flavorText, "Whenever the Llanowar Elves gather the fruits of their forest, they leave one plant of each type untouched, considering that nature's portion.");

    setDefaultAbilities(&card->abilities);

    card->damageAbilities.hasDamageAbility = false;

    card->manaGeneration.hasManaCreation = true;
    card->manaGeneration.causesTap = true;
    card->manaGeneration.greenMana = 1;

    setUnblockables(&card->unblockableVarieties);
}

// Forest initialization
void initializeForest(BasicLand* card) {
    card->landMetaData.type = LAND_FOREST;

    resetLandMechanics(&card->landMechanicBasics);

    resetManaProduction(&card->manaProduction);
    card->manaProduction.greenManaAdded = 1;
}
