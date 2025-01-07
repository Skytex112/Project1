//#include "Drib.h"
//
//Drib::Drib(int num, int denom) 
//{
//    numerator = num;
//    denominator = denom;
//}
//
//void Drib::input() 
//{
//    std::cout << "Enter the number: ";
//    std::cin >> numerator;
//    std::cout << "Enter the denominator: ";
//    std::cin >> denominator;
//}
//
//Drib Drib::add(const Drib& other) 
//{
//    return Drib(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
//}
//
//Drib Drib::subtract(const Drib& other) 
//{
//    return Drib(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
//}
//
//Drib Drib::multiply(const Drib& other) 
//{
//    return Drib(numerator * other.numerator, denominator * other.denominator);
//}
//
//Drib Drib::divide(const Drib& other) 
//{
//    return Drib(numerator * other.denominator, denominator * other.numerator);
//}
//
//void Drib::display() const 
//{
//    std::cout << numerator << " / " << denominator << std::endl;
//}
