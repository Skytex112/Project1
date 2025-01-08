#pragma once
#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    size_t size;

public:
    Array();
    Array(size_t size);
    Array(size_t size, T min, T max);
    Array(const Array& other);
    ~Array();

    void display() const;
    void fillRandom(T min, T max);
    void resize(size_t newSize);
    void sortArray();
    T findMin() const;
    T findMax() const;

    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    Array& operator+=(const Array& other);
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    bool operator>(const Array& other) const;
    bool operator<(const Array& other) const;
    Array operator*(const Array& other) const;

    void Append(const T& value);
    void Remove(size_t index);
};