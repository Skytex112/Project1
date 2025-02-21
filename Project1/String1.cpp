#include "String1.h"
#include <iostream>
#include <cstring>

const size_t DEFAULT_CAPACITY = 10;

void String1::ensureCapacity(size_t requiredCapacity) {
    if (requiredCapacity > capacity) {
        size_t newCapacity = requiredCapacity;
        char* newStr = new char[newCapacity];
        strcpy_s(newStr, newCapacity, str);
        delete[] str;
        str = newStr;
        capacity = newCapacity;
    }
}


String1::String1() : size(0), capacity(DEFAULT_CAPACITY) {
    str = new char[capacity];
    str[0] = '\0';
}

String1::String1(size_t customSize) : size(0), capacity(customSize + 1) {
    str = new char[capacity];
    str[0] = '\0';
}

String1::String1(const char* input) : size(strlen(input)), capacity(strlen(input) + 1) {
    str = new char[capacity];
    strcpy_s(str, capacity, input);
}

String1::String1(const String1& other) : size(other.size), capacity(other.capacity) {
    str = new char[capacity];
    strcpy_s(str, capacity, other.str);
}

String1::~String1() {
    delete[] str;
}

void String1::input() {
    std::cout << "Enter a String1: ";
    char buffer[DEFAULT_CAPACITY];
    std::cin.getline(buffer, DEFAULT_CAPACITY);
    size_t inputLength = strlen(buffer);
    ensureCapacity(inputLength + 1);
    strcpy_s(str, capacity, buffer);
    size = inputLength;
}

void String1::output() const {
    std::cout << "String1: " << str << std::endl;
}

size_t String1::length() const {
    return size;
}

size_t String1::getCapacity() const {
    return capacity;
}

size_t String1::getSize() const {
    return size;
}

void String1::append(char c) {
    ensureCapacity(size + 2);
    str[size] = c;
    str[size + 1] = '\0';
    ++size;
}

void String1::append(const String1& other) {
    ensureCapacity(size + other.size + 1);
    strcat_s(str, capacity, other.str);
    size += other.size;
}


void String1::clear() {
    size = 0;
    str[0] = '\0';
}

void String1::reserve(size_t extraCapacity) {
    if (extraCapacity > capacity) {
        ensureCapacity(extraCapacity);
    }
}


void String1::shrink() {
    if (capacity > size + 1) {
        char* newStr = new char[size + 1];
        strcpy_s(newStr, size + 1, str);
        delete[] str;
        str = newStr;
        capacity = size + 1;
    }
}