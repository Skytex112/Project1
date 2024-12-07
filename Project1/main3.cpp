//#include <iostream>
//
//int main() {
    //Exercise 1
   /* int num;

    std::cout << "Enter a six-digit number: ";
    std::cin >> num;

    if (num < 100000 || num > 999999) {
        std::cout << "You did not enter a six-digit number." << std::endl;
        return 1;
    }

    int first_three_digits = num / 1000;
    int last_three_digits = num % 1000;

    int sum_first = 0, sum_last = 0;
    while (first_three_digits > 0) {
        sum_first += first_three_digits % 10;
        first_three_digits /= 10;
    }
    while (last_three_digits > 0) {
        sum_last += last_three_digits % 10;
        last_three_digits /= 10;
    }

    if (sum_first == sum_last) {
        std::cout << "Number " << num << " is happy." << std::endl;
    }
    else {
        std::cout << "Number " << num << " isn`t happy." << std::endl;
    }*/

    //Exercise 2
   /* int num2;

    std::cout << "Enter four-digit number: ";
    std::cin >> num2;

    if (num2 < 1000 || num2 > 9999) {
        std::cout << "You did not enter a four-digit number." << std::endl;
        return 1;
    }

    int thousand = num2 / 1000;
    int hundreds = (num2 / 100) % 10;
    int tens = (num2 / 10) % 10;
    int units = num2 % 10;

    int new_number = units * 1000 + tens * 100 + hundreds * 10 + thousand;

    std::cout << "New number: " << new_number << std::endl;*/


    //Exercise 3
   /* int num3, max_number;

    std::cout << "Enter first number: ";
    std::cin >> num3;
    max_number = num3;

    for (int i = 1; i < 7; ++i) {
        std::cout << "Enter " << i + 1 << " number: ";
        std::cin >> num3;
        if (num3 > max_number) {
            max_number = num3;
        }
    }

    std::cout << "Max number: " << max_number << std::endl;*/


//    return 0;
//}