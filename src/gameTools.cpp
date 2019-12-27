#include "gameTools.h"
#include "player.h"

namespace startGame {

    void printWelcome() {
        std::cout << "=================" << std::endl;
        std::cout << "     Welcome" << std::endl;
        std::cout << "=================" << std::endl;
    }

    void saveGame(Player userChar) {
        
    }

    Player loadGame() {

    }

    Player startGame() {
        char input;
        bool loop = true;
        int attack = 0, defense = 0, health = 100;
        std::string name;
        printWelcome();
        std::cout << "Please enter your name: ";
        std::cin >> name;
        std::cout << "Please choose from the following:\n1) Warrior\n2) Mage\n-1) Quit" << std::endl;
        do {
            std::cin >> input;
            switch (input)
            {
            case '1':
                std::cout << "You have chosen to walk the path of the warrior." << std::endl;
                loop = false;
                attack = 15;
                defense = 10;
                break;
            case '2':
                std::cout << "You have chosen the way of the mage." << std::endl;
                loop = false;
                attack = 5;
                defense = 10;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        } while(loop);
        
        Player returnPlayer(attack, defense, health, name);
        return returnPlayer;
    }
}