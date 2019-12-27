#ifndef GAMETOOLS_H
#define GAMETOOLS_H
#include <iostream>
#include "player.h"

namespace startGame {

    void printWelcome();
    
    void saveGame(Player);
    Player loadGame();

    Player startGame();
}
#endif