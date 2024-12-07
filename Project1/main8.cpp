#include <iostream>

using std::cout;
using std::endl;

// gcd - возвращает наибольший общий делитель

// Exercise 1
//void initializeMatrix(int** matrix, int size, int value) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            matrix[i][j] = value;
//        }
//    }
//}
//
//void initializeMatrix(double** matrix, int size, double value) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            matrix[i][j] = value;
//        }
//    }
//}
//
//void initializeMatrix(char** matrix, int size, char value) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            matrix[i][j] = value;
//        }
//    }
//}
//
//void printMatrix(int** matrix, int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void printMatrix(double** matrix, int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void printMatrix(char** matrix, int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void findMinMaxDiagonal(int** matrix, int size, int& min, int& max) {
//    min = matrix[0][0];
//    max = matrix[0][0];
//    for (int i = 1; i < size; i++) {
//        if (matrix[i][i] < min) min = matrix[i][i];
//        if (matrix[i][i] > max) max = matrix[i][i];
//    }
//}
//
//void findMinMaxDiagonal(double** matrix, int size, double& min, double& max) {
//    min = matrix[0][0];
//    max = matrix[0][0];
//    for (int i = 1; i < size; i++) {
//        if (matrix[i][i] < min) min = matrix[i][i];
//        if (matrix[i][i] > max) max = matrix[i][i];
//    }
//}
//
//void sortRow(int* row, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (row[j] > row[j + 1]) {
//                int temp = row[j];
//                row[j] = row[j + 1];
//                row[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void sortMatrixRows(int** matrix, int size) {
//    for (int i = 0; i < size; i++) {
//        sortRow(matrix[i], size);
//    }
//}

//Exercise 2
//int ser(int num1, int num2) 
//{
//    if (num2 == 0) 
//    {
//        return num1;
//    }
//    return ser(num2, num1 % num2);
//}

//Exercise 3
//void stars(int N) 
//{
//    if (N <= 0) 
//    {
//        return;
//    }
//    cout << "* ";
//    stars(N - 1);
//}

//Exercise 4

//int sumRange(int a, int b) {
//    if (a > b) 
//    {
//        return 0;
//    }
//    return a + sumRange(a + 1, b);
//}


int main()
{
    //Exercise 1
    /*int size = 3;

    int** intMatrix = new int* [size];
    for (int i = 0; i < size; i++) {
        intMatrix[i] = new int[size];
    }

    initializeMatrix(intMatrix, size, 10);
    cout << "Int matrix after initialization:" << endl;
    printMatrix(intMatrix, size);

    int min, max;
    findMinMaxDiagonal(intMatrix, size, min, max);
    cout << "Min on diagonal: " << min << ", Max on diagonal: " << max << endl;

    sortMatrixRows(intMatrix, size);
    cout << "Int matrix after sorting rows:" << endl;
    printMatrix(intMatrix, size);

    for (int i = 0; i < size; i++) {
        delete[] intMatrix[i];
    }
    delete[] intMatrix;*/


    //Exercise 2
   /* int num1, num2;

    cout << "Enter two number: ";
    std::cin >> num1 >> num2;

    cout << "The largest store: " << ser(num1, num2) << endl;*/

    ////Exercise 3
    //int N;
    //cout << "Number of stars: ";
    //std::cin >> N;

    //stars(N);

    //Exercise 4
    /*int a;
    int b;
    cout << "Enter the range from a to b: ";
    std::cin >> a >> b;

    int result = sumRange(a, b);
    cout << "Result = " << result << endl;*/


}




// - Що таке функція? Поясніть синтаксис оголошення функції.
// частина програми, яка реалізує певний алгоритм і дозволяє звернення до неї з різних частин програми.
// Синтаксис
// void myFunction() 
// {
//      код для виконання
// }
//
//- Для чого використовується ключова властивість void?
//void — спеціальний тип результату функцій, який позначає що функція нічого не повертає
//
//Для чого використовується ключова властивість return?
// Оператор return завершує виконання поточної функції та повертає її значення.
// Також якщо N не дорівнює M прериває виконання функції
// if(N != M)
// {
// return;
// }
// 
// 
// Поясніть принцип передачі параметрів за значенням у функцію.
// При передачі параметрів за значенням у функції утворюється локальна копія, що приводить до збільшення об'єму необхідної пам'яті
// 
// Що таке область видимості?
// Область видимості ідентифікатора визначає, де він доступний для використання. До ідентифікатора, який знаходиться поза областю видимості, доступ закритий.
// 
// Для чого використовується перевантаження функцій?
// Перевантаження функцій дозволяє визначати кілька функцій з тим самим ім'ям і типом значення, що повертається
// 
// Чи можна перевантажити функцію на підставі значення, що повертається?
// Не допускається перевантаження функцій із співпадаючими списками параметрів лише на основі типу повертаємих значень
//
//Що таке шаблонні функції? Наведіть приклад використання шаблонних функцій.
//Шаблонні функції - узагальнене визначення функції, за яким компілятор автоматично згенерує код конкретного екземпляра функції
//





