#pragma once
#include "Unit.h"

class Range : public Unit {
protected:
    int accuracy;

public:
    Range(int hp, const std::string& name, int acc, Weapon* wpn = nullptr);
};