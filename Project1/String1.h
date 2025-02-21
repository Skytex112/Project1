#pragma once

class String1 {
private:
    char* str;
    size_t size;
    size_t capacity;

    void ensureCapacity(size_t requiredCapacity);
public:
    String1();
    String1(size_t customSize);
    String1(const char* input);
    String1(const String1& other);
    ~String1();

    void input();
    void output() const;
    size_t length() const;
    size_t getCapacity() const;
    size_t getSize() const;

    void append(char c);
    void append(const String1& other);
    void clear();
    void reserve(size_t extraCapacity);
    void shrink();
};