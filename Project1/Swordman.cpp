#include "Swordman.h"

Swordman::Swordman(int hp, const std::string& name, Weapon* wpn)
    : Melee(hp, name, wpn) {
}

void Swordman::Attack(Unit& target) {
    if (weapon) {
        int damage = weapon->GetDamage();
        target.TakeDamage(damage);
    }
}