#include <fstream>
#include "gameTools.h"
#include "item.h"
#include "player.h"

namespace gameTools {

    void printWelcome() {
        std::cout << "=================" << std::endl;
        std::cout << "     Welcome" << std::endl;
        std::cout << "=================" << std::endl;
    }

    void saveGame(Player userChar) {
        bool loop = true;
        std::cout << "Save to file 1, 2, or 3: ";
        int input;
        do {
            std::cin >> input;
            if(std::cin.fail()) {
                std::cout << "Invalid choice" << std::endl;
                std::cin.clear();
                std::cin.ignore(256, '\n');
                continue;
            }
            if(input == 1 || input == 2 || input == 3) {
                std::cout << "Saving to slot " << input << std::endl;
                std::fstream file;
                
                file.close();
                loop = false;
            }
            else {
                std::cout << "Invalid Save Slot" << std::endl;
            }
        } while(loop);
    }

    Player loadGame() {

    }

    std::vector<char> loadMap() {
        std::ifstream file;
        std::vector<char> map;
        file.open("misc/map");

        if(file.is_open()){
            
        }
        else {
            throw std::invalid_argument("Map file couldn't be opened!");
        }

        return map;
    }

    int findUserDamage(Player user, Creature enemy) {
        int userDmg = user.getAttack()+user.getMainHand().getDamage()+(user.getMainHand().getDamage() * (user.getMainHand().getSpellPower())/100);
        int dmgTaken = userDmg - enemy.getDefense();
        if(dmgTaken <= 0) {
            dmgTaken = 0;
        }
        return dmgTaken;
    }

    int findEnemyDamage(Creature enemy, Player user) {
        int dmgTaken = enemy.getAttack() - user.getDefense();
        if(dmgTaken <= 0) {
            dmgTaken = 0;
        }
        return dmgTaken;
    }

    Player startGame() {
        int input;
        bool loop = true;
        int attack = 0, defense = 0, health = 100;
        Item starterItem;
        std::string name;
        printWelcome();
        std::cout << "Please enter your name: ";
        std::cin >> name;
        std::cout << "Please choose from the following:\n1) Warrior\n2) Mage\n-1) Quit" << std::endl;
        do {
            std::cin >> input;
            if(std::cin.fail()) {
                std::cout << "Invalid choice" << std::endl;
                std::cin.clear();
                std::cin.ignore(256, '\n');
                continue;
            }
            switch (input)
            {
            case -1:
                exit(1);
                break;
            case 1:
                std::cout << "You have chosen to walk the path of the warrior." << std::endl;
                loop = false;
                attack = 15;
                defense = 10;
                starterItem.setDamage(20);
                starterItem.setDefense(10);
                starterItem.setSpellPower(0);
                starterItem.setName("Longsword");
                break;
            case 2:
                std::cout << "You have chosen the way of the mage." << std::endl;
                loop = false;
                attack = 5;
                defense = 10;
                starterItem.setDamage(5);
                starterItem.setDefense(5);
                starterItem.setSpellPower(20);
                starterItem.setName("Magic Wand");
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
            }
        } while(loop);
        
        Player returnPlayer(attack, defense, health, name, starterItem);
        return returnPlayer;
    }
}