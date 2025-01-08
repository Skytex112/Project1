#include "array.h"
#include <iostream>

template <typename T>
Array<T>::Array() : size(0), data(nullptr) {}

template <typename T>
Array<T>::Array(size_t size) : size(size) 
{
    data = new T[size]();
}

template <typename T>
Array<T>::Array(size_t size, T min, T max) : size(size) 
{
    data = new T[size];
    for (size_t i = 0; i < size; ++i) 
    {
        data[i] = min + (i % (max - min + 1));
    }
}

template <typename T>
Array<T>::Array(const Array& other) : size(other.size) 
{
    data = new T[size];
    for (size_t i = 0; i < size; ++i) 
    {
        data[i] = other.data[i];
    }
}

template <typename T>
Array<T>::~Array() 
{
    delete[] data;
}

template <typename T>
void Array<T>::display() const 
{
    for (size_t i = 0; i < size; ++i) 
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void Array<T>::fillRandom(T min, T max) 
{
    for (size_t i = 0; i < size; ++i) 
    {
        data[i] = min + (i % (max - min + 1));
    }
}

template <typename T>
void Array<T>::resize(size_t newSize) 
{
    T* newData = new T[newSize]();
    for (size_t i = 0; i < (size < newSize ? size : newSize); ++i) 
    {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    size = newSize;
}

template <typename T>
void Array<T>::sortArray() 
{
    for (size_t i = 0; i < size - 1; ++i) 
    {
        for (size_t j = i + 1; j < size; ++j) 
        {
            if (data[i] > data[j]) 
            {
                T temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

template <typename T>
T Array<T>::findMin() const 
{
    T min = data[0];
    for (size_t i = 1; i < size; ++i) 
    {
        if (data[i] < min) 
        {
            min = data[i];
        }
    }
    return min;
}

template <typename T>
T Array<T>::findMax() const 
{
    T max = data[0];
    for (size_t i = 1; i < size; ++i) 
    {
        if (data[i] > max) 
        {
            max = data[i];
        }
    }
    return max;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) 
{
    if (this != &other) {
        delete[] data;
        size = other.size;
        data = new T[size];
        for (size_t i = 0; i < size; ++i) 
        {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template <typename T>
Array<T> Array<T>::operator+(const Array& other) const 
{
    size_t newSize = size + other.size;
    Array<T> result(newSize);
    for (size_t i = 0; i < size; ++i) 
    {
        result.data[i] = data[i];
    }
    for (size_t i = 0; i < other.size; ++i) 
    {
        result.data[size + i] = other.data[i];
    }
    return result;
}

template <typename T>
Array<T>& Array<T>::operator+=(const Array& other) 
{
    size_t newSize = size + other.size;
    T* newData = new T[newSize];

    for (size_t i = 0; i < size; ++i) 
    {
        newData[i] = data[i];
    }
    for (size_t i = 0; i < other.size; ++i) 
    {
        newData[size + i] = other.data[i];
    }

    delete[] data;
    data = newData;
    size = newSize;

    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index) 
{
    return data[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const 
{
    return data[index];
}

template <typename T>
bool Array<T>::operator==(const Array& other) const 
{
    if (size != other.size) return false;
    for (size_t i = 0; i < size; ++i) {
        if (data[i] != other.data[i]) return false;
    }
    return true;
}

template <typename T>
bool Array<T>::operator!=(const Array& other) const 
{
    return !(*this == other);
}

template <typename T>
bool Array<T>::operator>(const Array& other) const 
{
    return size > other.size;
}

template <typename T>
bool Array<T>::operator<(const Array& other) const 
{
    return size < other.size;
}

template <typename T>
Array<T> Array<T>::operator*(const Array& other) const 
{
    size_t newSize = 0;
    for (size_t i = 0; i < size; ++i) 
    {
        for (size_t j = 0; j < other.size; ++j) 
        {
            if (data[i] == other.data[j]) 
            {
                ++newSize;
                break;
            }
        }
    }

    Array<T> result(newSize);
    size_t index = 0;
    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < other.size; ++j) 
        {
            if (data[i] == other.data[j]) 
            {
                result.data[index++] = data[i];
                break;
            }
        }
    }

    return result;
}

template <typename T>
void Array<T>::Append(const T& value) 
{
    T* newData = new T[size + 1];

    for (size_t i = 0; i < size; ++i) 
    {
        newData[i] = data[i];
    }

    newData[size] = value;

    delete[] data;
    data = newData;

    size++;
}

template <typename T>
void Array<T>::Remove(size_t index)
{
    if (index >= size)
    {
        std::cout << "Index out of bounds!" << std::endl;
        return;
    }

    for (size_t i = index; i < size - 1; ++i)
    {
        data[i] = data[i + 1];
    }

    --size;

    T* newData = new T[size];
    for (size_t i = 0; i < size; ++i)
    {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
}


template class Array<int>;

