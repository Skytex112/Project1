#include "Archer.h"

Archer::Archer(int hp, const std::string& name, int acc, int arrowCount, Weapon* wpn)
    : Range(hp, name, acc, wpn), arrows(arrowCount) {
}

void Archer::Attack(Unit& target) {
    if (arrows > 0 && weapon) {
        int damage = (int)(weapon->GetDamage() * (accuracy / 100.0));
        target.TakeDamage(damage);
        arrows--;
    }
}
