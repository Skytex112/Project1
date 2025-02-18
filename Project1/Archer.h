#pragma once
#include "Range.h"

class Archer : public Range {
private:
    int arrows;

public:
    Archer(int hp, const std::string& name, int acc, int arrowCount, Weapon* wpn = nullptr);
    void Attack(Unit& target);
};

