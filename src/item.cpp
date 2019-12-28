#include "item.h"

Item::Item() {
    Item::setDamage(0);
    Item::setDefense(0);
    Item::setSpellPower(0);
    Item::setName("Unnamed Item");
}

Item::Item(int damage_init, int defense_init, int spellPower_init, std::string weaponName) {
    Item::setDamage(damage_init);
    Item::setDefense(defense_init);
    Item::setSpellPower(spellPower_init);
    Item::setName(weaponName);
}

std::string Item::getName() {
    return name;
}
void Item::setName(std::string newName) {
    name = newName;
}

int Item::getDamage() {
    return damage;
}
void Item::setDamage(int damage_new) {
    damage = damage_new;
}

int Item::getDefense() {
    return defense;
}
void Item::setDefense(int defense_new) {
    defense = defense_new;
}

int Item::getSpellPower() {
    return spellPower;
}
void Item::setSpellPower(int spellPower_new) {
    spellPower = spellPower_new;
}