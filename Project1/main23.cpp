#include "array.h"
using std::cout;
using std::endl;

int main() {
    Array<int> arr1(10, 1, 100);
    cout << "Initial array: ";
    arr1.display();

    arr1.sortArray();
    cout << "Sorted array: ";
    arr1.display();

    cout << "Minimum value: " << arr1.findMin() << endl;
    cout << "Maximum value: " << arr1.findMax() << endl;

    arr1.resize(15);
    arr1.fillRandom(50, 150);
    cout << "Resized and filled array: ";
    arr1.display();

    Array<int> arr2(5, 10, 50);
    cout << "Second array: ";
    arr2.display();

    Array<int> arr3 = arr1 + arr2;
    cout << "Array 1 + Array 2: ";
    arr3.display();

    arr1 += arr2;
    cout << "Array 1 after += Array 2: ";
    arr1.display();

    cout << "Element at index 3: " << arr1[3] << endl;

    if (arr1 == arr2) {
        cout << "Arrays are equal." << endl;
    }
    else {
        cout << "Arrays are not equal." << endl;
    }

    Array<int> arr4 = arr1 * arr2;
    cout << "Common elements between Array 1 and Array 2: ";
    arr4.display();

    return 0;
}
