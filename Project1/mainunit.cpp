#include "Sword.h"
#include "Bow.h"
#include "Stick.h"
#include "Archer.h"
#include "Mage.h"
#include "Swordman.h"

int main() {
    Sword* sword = new Sword(10, "Steel Sword", Grade::COMMON);
    Bow* bow = new Bow(8, "Wooden Bow", Grade::COMMON);
    Stick* stick = new Stick(5, "Magic Stick", Grade::RARE);

    Swordman warrior(100, "Warrior", sword);
    Archer archer(80, "Archer", 85, 20, bow);
    Mage mage(60, "Mage", 90, 100, stick);

    archer.Attack(warrior);
    mage.Attack(archer);
    warrior.Attack(mage);

    return 0;
}