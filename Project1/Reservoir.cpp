//#include "Reservoir.h"
//
//void customStrCopy(char* dest, const char* src, int maxLength) 
//{
//    int i = 0;
//    for (; i < maxLength - 1 && src[i] != '\0'; ++i) 
//    {
//        dest[i] = src[i];
//    }
//    dest[i] = '\0';
//}
//
//bool customStrCompare(const char* str1, const char* str2) 
//{
//    while (*str1 && *str2 && *str1 == *str2) 
//    {
//        ++str1;
//        ++str2;
//    }
//    return *str1 == '\0' && *str2 == '\0';
//}
//
//Reservoir::Reservoir() : width(0), length(0), maxDepth(0) 
//{
//    customStrCopy(name, "Unnamed", MAX_NAME_LENGTH);
//    customStrCopy(type, "Unknown", MAX_NAME_LENGTH);
//}
//
//Reservoir::Reservoir(const char* name, const char* type, double width, double length, double maxDepth)
//    : width(width), length(length), maxDepth(maxDepth) 
//{
//    customStrCopy(this->name, name, MAX_NAME_LENGTH);
//    customStrCopy(this->type, type, MAX_NAME_LENGTH);
//}
//
//Reservoir::Reservoir(const Reservoir& other)
//    : width(other.width), length(other.length), maxDepth(other.maxDepth) 
//{
//    customStrCopy(name, other.name, MAX_NAME_LENGTH);
//    customStrCopy(type, other.type, MAX_NAME_LENGTH);
//}
//
//Reservoir::~Reservoir() {}
//
//void Reservoir::setName(const char* newName) 
//{
//    customStrCopy(name, newName, MAX_NAME_LENGTH);
//}
//
//void Reservoir::setType(const char* newType) 
//{
//    customStrCopy(type, newType, MAX_NAME_LENGTH);
//}
//
//void Reservoir::setDimensions(double newWidth, double newLength, double newMaxDepth) 
//{
//    width = newWidth;
//    length = newLength;
//    maxDepth = newMaxDepth;
//}
//
//const char* Reservoir::getName() const 
//{
//    return name;
//}
//
//const char* Reservoir::getType() const 
//{
//    return type;
//}
//
//double Reservoir::getWidth() const 
//{
//    return width;
//}
//
//double Reservoir::getLength() const 
//{
//    return length;
//}
//
//double Reservoir::getMaxDepth() const 
//{
//    return maxDepth;
//}
//
//double Reservoir::calculateVolume() const 
//{
//    return width * length * maxDepth;
//}
//
//double Reservoir::calculateSurfaceArea() const 
//{
//    return width * length;
//}
//
//bool Reservoir::isSameType(const Reservoir& other) const 
//{
//    return customStrCompare(type, other.type);
//}
//
//bool Reservoir::hasLargerSurfaceAreaThan(const Reservoir& other) const 
//{
//    if (!isSameType(other)) 
//    {
//        std::cout << "Reservoirs are of different types." << std::endl;
//        return false;
//    }
//    return calculateSurfaceArea() > other.calculateSurfaceArea();
//}
//
//Reservoir& Reservoir::operator=(const Reservoir& other) 
//{
//    if (this != &other) 
//    {
//        customStrCopy(name, other.name, MAX_NAME_LENGTH);
//        customStrCopy(type, other.type, MAX_NAME_LENGTH);
//        width = other.width;
//        length = other.length;
//        maxDepth = other.maxDepth;
//    }
//    return *this;
//}
//
//void Reservoir::printInfo() const 
//{
//    std::cout << "Name: " << name << ", Type: " << type << ", Width: " << width << " m, Length: " << length << " m, Maximum depth: " << maxDepth << " m" << std::endl;
//}
