//#include "string.h"
//
//String::String() : String(80) {}
//
//String::String(size_t size) : size(size) {
//    str = new char[size + 1];
//    str[0] = '\0';
//}
//
//String::String(const char* initStr) {
//    size = 0;
//    while (initStr[size] != '\0') ++size;
//    str = new char[size + 1];
//    for (size_t i = 0; i < size; ++i) {
//        str[i] = initStr[i];
//    }
//    str[size] = '\0';
//}
//
//String::String(const String& other) : size(other.size) {
//    str = new char[size + 1];
//    for (size_t i = 0; i < size; ++i) {
//        str[i] = other.str[i];
//    }
//    str[size] = '\0';
//}
//
//String::~String() {
//    delete[] str;
//}
//
//void String::input() {
//    std::cout << "Enter a string: ";
//    delete[] str;
//    char temp[1024];
//    std::cin.getline(temp, 1024);
//    size = 0;
//    while (temp[size] != '\0') ++size;
//    str = new char[size + 1];
//    for (size_t i = 0; i < size; ++i) {
//        str[i] = temp[i];
//    }
//    str[size] = '\0';
//}
//
//void String::display() const {
//    std::cout << str << std::endl;
//}