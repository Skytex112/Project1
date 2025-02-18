#pragma once
#include "Melee.h"

class Swordman : public Melee {
public:
    Swordman(int hp, const std::string& name, Weapon* wpn = nullptr);
    void Attack(Unit& target);
};