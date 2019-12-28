#ifndef PLAYER_H
#define PLAYER_H

#include "creature.h"
#include "item.h"
#include <string>

class Player : public Creature {
    private:
    Item mainHand;

    public:

    Player(int, int, int, std::string, Item);
    int getCurrentHealth();
    void setCurrentHealth(int);

    int getMaxHealth();
    void setMaxHealth(int);

    int getDefense();
    void setDefense(int);

    int getAttack();
    void setAttack(int);

    virtual void takeDamage(int);
    virtual void heal(int);

    std::string getName();
    void setName(std::string);

    Item getMainHand();
    void setMainHand(Item);
};

#endif