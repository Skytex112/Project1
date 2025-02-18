#pragma once
#include <string>
#include "Weapon.h"

class Unit {
protected:
    Weapon* weapon;
    int speed;
    int HP;
    double armor;
    double regen;
    std::string name;

protected:
    Unit(int hp, const std::string& unitName, Weapon* wpn = nullptr,
        int spd = 0, double arm = 0, double reg = 0);

public:
    ~Unit();
    void Attack(Unit& target);
    void Rest();
    void Defense();
    int TakeDamage(int damage);
    bool IsDead() const;
};