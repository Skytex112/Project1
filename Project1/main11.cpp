//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//// Exercise 1
////void countElements(int* arr, int size, int& negative, int& positive, int& zero) 
////{
////    negative = 0;
////    positive = 0;
////    zero = 0;
////
////    for (int i = 0; i < size; i++) 
////    {
////        if (arr[i] < 0) 
////        {
////            negative++;
////        }
////        else if (arr[i] > 0) 
////        {
////            positive++;
////        }
////        else 
////        {
////            zero++;
////        }
////    }
////}
//
//
////Exercise 2
//
////int* findSubset(int* A, int sizeA, int* B, int sizeB) 
////{
////    if (sizeB > sizeA) 
////    {
////        return nullptr;
////    }
////    for (int i = 0; i <= sizeA - sizeB; ++i) 
////    {
////        bool isSubset = true;
////
////        for (int j = 0; j < sizeB; ++j) 
////        {
////            if (A[i + j] != B[j]) 
////            {
////                isSubset = false;
////                break;
////            }
////        }
////        if (isSubset) 
////        {
////            return &A[i];
////        }
////    }
////    return nullptr;
////}
//
////Exercise 3
//
////int* removeNegativeNumbers(int* arr, int size, int& newSize) {
////    int count = 0;
////    for (int i = 0; i < size; ++i) 
////    {
////        if (arr[i] >= 0) 
////        {
////            ++count;
////        }
////    }
////
////    newSize = count;
////    int* newArray = new int[newSize];
////    int index = 0;
////    for (int i = 0; i < size; ++i) 
////    {
////        if (arr[i] >= 0) 
////        {
////            newArray[index++] = arr[i];
////        }
////    }
////
////    return newArray;
////}
//
//
//int main()
//{
//	// Exercise 1
//    /*int size;
//    int negative, positive, zero;
//
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    if (size <= 0) 
//    {
//        cout << "The size of the array must be greater than 0." << endl;
//        return 1;
//    }
//
//    int* arr = new int[size];
//
//    cout << "Enter " << size << " elements of the array:" << endl;
//    for (int i = 0; i < size; i++) 
//    {
//        cin >> arr[i];
//    }
//
//    countElements(arr, size, negative, positive, zero);
//
//    cout << "Number of negative elements: " << negative << endl;
//    cout << "Number of positive elements: " << positive << endl;
//    cout << "The number of zero elements: " << zero << endl;
//
//    delete[] arr;*/
//
//
//    //Exercise 2
//    /*int A[] = { 1, 2, 3, 4, 5, 6 };
//    int B[] = { 3, 4, 5 };
//
//    int sizeA = sizeof(A) / sizeof(A[0]);
//    int sizeB = sizeof(B) / sizeof(B[0]);
//
//    int* result = findSubset(A, sizeA, B, sizeB);
//
//    if (result != nullptr) 
//    {
//        cout << "Array B is a subset of array A starting at index: " << (result - A) << endl;
//    }
//    else 
//    {
//        cout << "Array B is not a subset of array A." << endl;
//    }*/
//
//    // Exercise 3
//
//    /*int dynamicArray[] = { 1, -2, 3, -4, 5, -6 };
//    int size = sizeof(dynamicArray) / sizeof(dynamicArray[0]);
//    int newSize;
//
//    int* filteredArray = removeNegativeNumbers(dynamicArray, size, newSize);
//
//    std::cout << "Array after removing negative numbers: ";
//    for (int i = 0; i < newSize; ++i) {
//        std::cout << filteredArray[i] << " ";
//    }
//    std::cout << std::endl;
//
//    delete[] filteredArray;*/
//
//	return 0;
//}