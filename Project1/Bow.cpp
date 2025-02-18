#include "Bow.h"

Bow::Bow(int dmg, const std::string& name, Grade grade)
    : Weapon(dmg, name, grade) {
}

int Bow::GetDamage() const {
    return damage;
}