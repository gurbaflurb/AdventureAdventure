#ifndef PLAYER_H
#define PLAYER_H
#include "creature.h"
#include "item.h"
#include <string>

class Player : public Creature {
    private:
    Item currentItem();

    public:

    Player(int attack_init, int defense_init, int health_init, std::string name_init);
    int getCurrentHealth();
    void setCurrentHealth(int);

    int getMaxHealth();
    void setMaxHealth(int);

    int getDefense();
    void setDefense(int);

    int getAttack();
    void setAttack(int);

    std::string getName();
    void setName(std::string);

};

#endif