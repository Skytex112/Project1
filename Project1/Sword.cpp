#include "Sword.h"

Sword::Sword(int dmg, const std::string& name, Grade grade)
    : Weapon(dmg, name, grade) {
}

int Sword::GetDamage() const {
    return damage * 1.2;
}