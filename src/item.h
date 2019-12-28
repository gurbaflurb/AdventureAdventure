#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
    private:
    std::string name;
    int damage, defense, spellPower; 

    public:

    Item();
    Item(int, int, int, std::string);

    std::string getName();
    void setName(std::string);

    int getDamage();
    void setDamage(int);

    int getDefense();
    void setDefense(int);

    int getSpellPower();
    void setSpellPower(int);
};

#endif