#include "Unit.h"

Unit::Unit(int hp, const std::string& unitName, Weapon* wpn,
    int spd, double arm, double reg)
    : HP(hp), name(unitName), weapon(wpn),
    speed(spd), armor(arm), regen(reg) {
}

Unit::~Unit() {
    delete weapon;
}

void Unit::Attack(Unit& target) {}

void Unit::Rest() {
    HP += (int)regen;
}

void Unit::Defense() {
    armor *= 1.1;
}

int Unit::TakeDamage(int damage) {
    int actualDamage = (int)(damage * (1.0 - armor));
    HP -= actualDamage;
    return actualDamage;
}

bool Unit::IsDead() const {
    return HP <= 0;
}