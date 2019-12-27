#ifndef ITEM_H
#define ITEM_H

class Item {
    private:
    int damage, defense, spellPower; 

    public:

    Item();
    Item(int, int, int);

    int getDamage();
    void setDamage(int);

    int getDefense();
    void setDefense(int);

    int getSpellPower();
    void setSpellPower(int);
};

#endif