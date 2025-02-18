#pragma once
#include "Range.h"

class Mage : public Range {
private:
    int mana;

public:
    Mage(int hp, const std::string& name, int acc, int manaPoints, Weapon* wpn = nullptr);
    void Attack(Unit& target);
};

