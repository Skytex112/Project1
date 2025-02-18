#pragma once
#include "Weapon.h"

class Sword : public Weapon {
public:
    Sword(int dmg, const std::string& name, Grade grade);
    int GetDamage() const;
};

