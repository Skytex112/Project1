#pragma once
#include <iostream>

template<typename T>
class Array1 {
private:
    T* data;
    size_t size;
    void clear();
public:
    Array1();
    Array1(size_t n);
    Array1(size_t n, int min, int max);
    Array1(size_t n, T x);
    Array1(const Array1& other);
    ~Array1();
    void display() const;
    void fillRandom(int min, int max);
    void resize(size_t newSize);
    void sort();
    T getMin() const;
    T getMax() const;
    void append(T value);
    void remove(size_t index);
};