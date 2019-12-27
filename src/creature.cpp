#include "creature.h"

Creature::Creature(int attack_init, int defense_init, int health_init, std::string name_init) {
    currentHealth = maxHealth;
    Creature::setMaxHealth(health_init);
    Creature::setDefense(defense_init);
    Creature::setAttack(attack_init);
    Creature::setName(name_init);
}

int Creature::getCurrentHealth() {
    return currentHealth;
}
void Creature::setCurrentHealth(int health) {
    if(health >= maxHealth){
        currentHealth = maxHealth;
    }
    else {
        currentHealth = health;
    }
}

int Creature::getMaxHealth() {
    return maxHealth;
}
void Creature::setMaxHealth(int health) {
    maxHealth = health;
}

int Creature::getDefense() {
    return defense;
}
void Creature::setDefense(int newDefense) {
    defense = newDefense;
}

int Creature::getAttack() {
    return attack;
}
void Creature::setAttack(int newAttack) {
    attack = newAttack;
}

std::string Creature::getName() {
    return name;
}
void Creature::setName(std::string newName) {
    name = newName;
}