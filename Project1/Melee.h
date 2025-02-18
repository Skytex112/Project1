#pragma once
#include "Unit.h"

class Melee : public Unit {
public:
    Melee(int hp, const std::string& name, Weapon* wpn = nullptr);
};