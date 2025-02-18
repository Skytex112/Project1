#pragma once
#include "Weapon.h"

class Stick : public Weapon {
public:
    Stick(int dmg, const std::string& name, Grade grade);
    int GetDamage() const;
};

