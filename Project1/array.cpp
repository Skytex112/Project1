//#include "array.h"
//
//Array::Array() : size(0), data(nullptr) {}
//
//Array::Array(size_t size) : size(size) 
//{
//    data = new int[size]();
//}
//
//Array::Array(size_t size, int min, int max) : size(size) 
//{
//    data = new int[size];
//    for (size_t i = 0; i < size; ++i) 
//    {
//        data[i] = min + (i % (max - min + 1));
//    }
//}
//
//Array::Array(const Array& other) : size(other.size) 
//{
//    data = new int[size];
//    for (size_t i = 0; i < size; ++i) 
//    {
//        data[i] = other.data[i];
//    }
//}
//
//Array::~Array() 
//{
//    delete[] data;
//}
//
//void Array::display() const 
//{
//    for (size_t i = 0; i < size; ++i) 
//    {
//        std::cout << data[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//void Array::fillRandom(int min, int max) 
//{
//    for (size_t i = 0; i < size; ++i) 
//    {
//        data[i] = min + (i % (max - min + 1));
//    }
//}
//
//void Array::resize(size_t newSize) 
//{
//    int* newData = new int[newSize]();
//    for (size_t i = 0; i < (size < newSize ? size : newSize); ++i) 
//    {
//        newData[i] = data[i];
//    }
//    delete[] data;
//    data = newData;
//    size = newSize;
//}
//
//void Array::sortArray() {
//    for (size_t i = 0; i < size - 1; ++i) 
//    {
//        for (size_t j = i + 1; j < size; ++j) 
//        {
//            if (data[i] > data[j]) {
//                int temp = data[i];
//                data[i] = data[j];
//                data[j] = temp;
//            }
//        }
//    }
//}
//
//int Array::findMin() const 
//{
//    int min = data[0];
//    for (size_t i = 1; i < size; ++i) 
//    {
//        if (data[i] < min) 
//        {
//            min = data[i];
//        }
//    }
//    return min;
//}
//
//int Array::findMax() const 
//{
//    int max = data[0];
//    for (size_t i = 1; i < size; ++i) 
//    {
//        if (data[i] > max) 
//        {
//            max = data[i];
//        }
//    }
//    return max;
//}
//
//Array& Array::operator=(const Array& other) 
//{
//    if (this != &other) 
//    {
//        delete[] data;
//        size = other.size;
//        data = new int[size];
//        for (size_t i = 0; i < size; ++i) 
//        {
//            data[i] = other.data[i];
//        }
//    }
//    return *this;
//}
//
//Array Array::operator+(const Array& other) const 
//{
//    size_t newSize = size + other.size;
//    Array result(newSize);
//    for (size_t i = 0; i < size; ++i)
//    {
//        result.data[i] = data[i];
//    }
//    for (size_t i = 0; i < other.size; ++i) 
//    {
//        result.data[size + i] = other.data[i];
//    }
//    return result;
//}
//
//Array& Array::operator+=(const Array& other) 
//{
//    size_t newSize = size + other.size;
//    int* newData = new int[newSize];
//
//    for (size_t i = 0; i < size; ++i) 
//    {
//        newData[i] = data[i];
//    }
//    for (size_t i = 0; i < other.size; ++i) 
//    {
//        newData[size + i] = other.data[i];
//    }
//
//    delete[] data;
//    data = newData;
//    size = newSize;
//
//    return *this;
//}
//
//int& Array::operator[](size_t index) 
//{
//    return data[index];
//}
//
//const int& Array::operator[](size_t index) const 
//{
//    return data[index];
//}
//
//bool Array::operator==(const Array& other) const 
//{
//    if (size != other.size) return false;
//    for (size_t i = 0; i < size; ++i) 
//    {
//        if (data[i] != other.data[i]) return false;
//    }
//    return true;
//}
//
//bool Array::operator!=(const Array& other) const 
//{
//    return !(*this == other);
//}
//
//bool Array::operator>(const Array& other) const 
//{
//    return size > other.size;
//}
//
//bool Array::operator<(const Array& other) const 
//{
//    return size < other.size;
//}
//
//Array Array::operator*(const Array& other) const 
//{
//    size_t newSize = 0;
//    for (size_t i = 0; i < size; ++i) 
//    {
//        for (size_t j = 0; j < other.size; ++j) 
//        {
//            if (data[i] == other.data[j]) 
//            {
//                ++newSize;
//                break;
//            }
//        }
//    }
//
//    Array result(newSize);
//    size_t index = 0;
//    for (size_t i = 0; i < size; ++i) 
//    {
//        for (size_t j = 0; j < other.size; ++j) 
//        {
//            if (data[i] == other.data[j]) 
//            {
//                result.data[index++] = data[i];
//                break;
//            }
//        }
//    }
//
//    return result;
//}
