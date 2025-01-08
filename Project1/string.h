#pragma once
#include <iostream>

class String 
{
private:
    char* str;
    size_t size;
    size_t strlen(const char* str) const;
    void strcpy(char* dest, const char* src) const;
    void strcat(char* dest, const char* src) const;
public:
    String();
    String(size_t size);
    String(const char* initStr);
    String(const String& other);
    ~String();

    void input();
    void display() const;

    String& operator=(const String& other);
    String operator+(const String& other) const; 
    String& operator+=(const String& other); 
    char& operator[](size_t index); 
    const char& operator[](size_t index) const; 
    friend std::ostream& operator<<(std::ostream& os, const String& s); 
    bool operator==(const String& other) const; 
    bool operator!=(const String& other) const; 
    bool operator>(const String& other) const; 
    bool operator<(const String& other) const; 
   
};
