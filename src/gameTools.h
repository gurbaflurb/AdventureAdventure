#ifndef GAMETOOLS_H
#define GAMETOOLS_H

#include <iostream>
#include <vector>
#include "player.h"

namespace gameTools {

    void printWelcome();
    
    void saveGame(Player);
    Player loadGame();

    std::vector<char> loadMap();

    int findUserDamage(Player, Creature);
    int findEnemyDamage(Creature, Player);

    Player startGame();
}
#endif