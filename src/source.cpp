#include <iostream>
#include <chrono>
#include <thread>
#include <fstream>
#include "creature.h"
#include "item.h"
#include "player.h"
#include "gameTools.h"

using namespace std;

int main()
{

	Player userPlayer = gameTools::startGame();
	try
	{
		gameTools::loadMap();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}