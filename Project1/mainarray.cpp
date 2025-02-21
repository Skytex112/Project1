#include <iostream>
#include "Array1.h"
#include "Array1.cpp"

int main() {
    srand(time(0));
    Array1<int> arr(5, 1, 10);
    std::cout << "Array: ";
    arr.display();
    arr.append(99);
    std::cout << "Append: ";
    arr.display();
    arr.remove(2);
    std::cout << "Remove index 2: ";
    arr.display();
    arr.sort();
    std::cout << "Sort array: ";
    arr.display();
    std::cout << "Min: " << arr.getMin() << std::endl;
    std::cout << "Max: " << arr.getMax() << std::endl;
    return 0;
}