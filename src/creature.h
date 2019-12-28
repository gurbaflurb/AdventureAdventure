#ifndef CREATURE_H 
#define CREATURE_H

#include <string>

class Creature {
    private:
    int maxHealth = 100, defense, attack, currentHealth;
    std::string name;
    
    public:
    Creature();
    Creature(int, int, int, std::string);

    virtual int getCurrentHealth();
    virtual void setCurrentHealth(int);

    virtual int getMaxHealth();
    virtual void setMaxHealth(int);

    virtual int getDefense();
    virtual void setDefense(int);

    virtual int getAttack();
    virtual void setAttack(int);

    virtual std::string getName();
    virtual void setName(std::string);

    virtual void takeDamage(int);
    virtual void heal(int);

};

#endif