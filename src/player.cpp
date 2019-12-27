#include "player.h"
#include "creature.h"

Player::Player(int attack_init, int defense_init, int health_init, std::string name_init):Creature(attack_init, defense_init, health_init, name_init) {

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

std::string Player::getName() {
    return Creature::getName();
}
void Player::setName(std::string name) {
    Creature::setName(name);
}