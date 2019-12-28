#include <iostream>
#include "player.h"
#include "item.h"
#include "creature.h"

Player::Player(int attack_init, int defense_init, int health_init, std::string name_init, Item starterWeapon):Creature(attack_init, defense_init, health_init, name_init) {
    mainHand = starterWeapon;
}

int Player::getCurrentHealth() {
    return Creature::getCurrentHealth();
}
void Player::setCurrentHealth(int newHealth) {
    Creature::setCurrentHealth(newHealth);
}

int Player::getMaxHealth() {
    return Creature::getMaxHealth();
}
void Player::setMaxHealth(int newMaxHealth) {
    Creature::setMaxHealth(newMaxHealth);
}

int Player::getDefense() {
    return Creature::getDefense();
}
void Player::setDefense(int newDefense) {
    Creature::setDefense(newDefense);
}

int Player::getAttack() {
    return Creature::getAttack();
}
void Player::setAttack(int newAttack) {
    Creature::setAttack(newAttack);
}

void Player::takeDamage(int damage) {
    Creature::takeDamage(damage);
}
void Player::heal(int heal) {
    Creature::heal(heal);
}

std::string Player::getName() {
    return Creature::getName();
}
void Player::setName(std::string name) {
    Creature::setName(name);
}

Item Player::getMainHand() {
    return mainHand;
}
void Player::setMainHand(Item newItem) {
    char input;
    std::cout << "Your current item will be destroyed if replaced, continue?(y/N): ";
    std::cin >> input;
    if(input == 'y' || input == 'Y') {
        mainHand = newItem;
    }
    else {
        std::cout << "Item not changed" << std::endl;
    }   
}