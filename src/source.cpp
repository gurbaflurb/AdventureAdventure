#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
#include "creature.h"
#include "item.h"
#include "player.h"
#include "gameTools.h"

using namespace std;

int main()
{
	Player userPlayer = startGame::startGame();

	return 0;
}