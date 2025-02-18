#include "Stick.h"

Stick::Stick(int dmg, const std::string& name, Grade grade)
    : Weapon(dmg, name, grade) {
}

int Stick::GetDamage() const {
    return damage * 0.8;
}