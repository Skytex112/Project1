#include "Range.h"

Range::Range(int hp, const std::string& name, int acc, Weapon* wpn)
    : Unit(hp, name, wpn), accuracy(acc) {
}