#include "Mage.h"

Mage::Mage(int hp, const std::string& name, int acc, int manaPoints, Weapon* wpn)
    : Range(hp, name, acc, wpn), mana(manaPoints) {
}

void Mage::Attack(Unit& target) {
    if (mana >= 10 && weapon) {
        int damage = (int)(weapon->GetDamage() * (accuracy / 100.0) * 1.5);
        target.TakeDamage(damage);
        mana -= 10;
    }
}
