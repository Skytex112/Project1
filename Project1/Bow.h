#pragma once
#include "Weapon.h"

class Bow : public Weapon {
public:
    Bow(int dmg, const std::string& name, Grade grade);
    int GetDamage() const;
};