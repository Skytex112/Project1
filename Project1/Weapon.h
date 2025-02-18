#pragma once
#include <string>
#include "Grade.h"

class Weapon {
protected:
    int damage;
    std::string name;
    Grade grade;

public:
    Weapon(int dmg, const std::string& wpnName, Grade wpnGrade);
    ~Weapon() = default;
    int GetDamage() const;
    void UpGrade();
};

