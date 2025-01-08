#include "string.h"

String::String() : String(80) {}

String::String(size_t size) : size(size) 
{
    str = new char[size + 1];
    str[0] = '\0';
}

String::String(const char* initStr) 
{
    size = strlen(initStr);
    str = new char[size + 1];
    strcpy(str, initStr);
}

String::String(const String& other) : size(other.size) 
{
    str = new char[size + 1];
    strcpy(str, other.str);
}

String::~String() 
{
    delete[] str;
}

void String::input() 
{
    std::cout << "Enter a string: ";
    delete[] str;
    char temp[1024];
    std::cin.getline(temp, 1024);
    size = strlen(temp);
    str = new char[size + 1];
    strcpy(str, temp);
}

void String::display() const 
{
    std::cout << str << std::endl;
}

String& String::operator=(const String& other) 
{
    if (this != &other) 
    {
        delete[] str;
        size = other.size;
        str = new char[size + 1];
        strcpy(str, other.str);
    }
    return *this;
}

String String::operator+(const String& other) const 
{
    String result(size + other.size);
    strcpy(result.str, str);
    strcat(result.str, other.str);
    return result;
}

String& String::operator+=(const String& other) 
{
    size += other.size;
    char* temp = new char[size + 1];
    strcpy(temp, str);
    strcat(temp, other.str);
    delete[] str;
    str = temp;
    return *this;
}

char& String::operator[](size_t index) 
{
    return str[index];
}

const char& String::operator[](size_t index) const 
{
    return str[index];
}

std::ostream& operator<<(std::ostream& os, const String& s) 
{
    os << s.str;
    return os;
}

bool String::operator==(const String& other) const 
{
    if (size != other.size) 
        return false;
    for (size_t i = 0; i < size; ++i) 
    {
        if (str[i] != other.str[i]) 
            return false;
    }
    return true;
}

bool String::operator!=(const String& other) const 
{
    return !(*this == other);
}

bool String::operator>(const String& other) const 
{
    return size > other.size;
}

bool String::operator<(const String& other) const 
{
    return size < other.size;
}

size_t String::strlen(const char* str) const 
{
    size_t length = 0;
    while (str[length] != '\0') 
    {
        ++length;
    }
    return length;
}

void String::strcpy(char* dest, const char* src) const 
{
    size_t i = 0;
    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
}

void String::strcat(char* dest, const char* src) const 
{
    size_t i = 0;
    while (dest[i] != '\0') 
    {
        ++i;
    }
    size_t j = 0;
    while (src[j] != '\0') 
    {
        dest[i + j] = src[j];
        ++j;
    }
    dest[i + j] = '\0';




}