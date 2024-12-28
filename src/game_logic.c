#include "../include/game_logic.h"

int damageToPlayer(int attackPowerToPlayer, int playerLifeTotal, bool blocked) {
    if (!blocked) {
        playerLifeTotal -= attackPowerToPlayer;
    }
    return playerLifeTotal;
}

bool blockingPreventsDamage(int attackPowerToPlayer, int toughnessOfBlocker) {
    return attackPowerToPlayer <= toughnessOfBlocker;
}
