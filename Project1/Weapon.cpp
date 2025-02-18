#include "Weapon.h"

Weapon::Weapon(int dmg, const std::string& wpnName, Grade wpnGrade)
    : damage(dmg), name(wpnName), grade(wpnGrade) {
}

int Weapon::GetDamage() const {
    return damage;
}

void Weapon::UpGrade() {
    damage += 5;
}