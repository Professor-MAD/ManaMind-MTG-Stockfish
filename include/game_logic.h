#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

#include <stdbool.h>
#include "creature_card.h"

// Damage and Blocking Logic
int damageToPlayer(int attackPowerToPlayer, int playerLifeTotal, bool blocked);
bool blockingPreventsDamage(int attackPowerToPlayer, int toughnessOfBlocker);
void rollToSeeWhoGoesFirst();

#endif // GAME_LOGIC_H
