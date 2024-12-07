//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//// Exercise 2
//
////bool InArray(int* arr, int size, int value) 
//// {
////    for (int i = 0; i < size; i++) 
////    {
////        if (arr[i] == value) 
////        {
////            return true;
////        }
////    }
////    return false;
////}
//
//// Exercise 3
////bool isInArray(int* arr, int size, int value) 
////{
////    for (int i = 0; i < size; i++) 
////    {
////        if (arr[i] == value) 
////        {
////            return true;
////        }
////    }
////    return false;
////}
//
//
//
//
//
//int main() {
//    // Exercise 1
//    /*int M;
//    cout << "Enter array size: ";
//    cin >> M;
//
//    if (M <= 0)
//    {
//        cout << "The size of the massif may be larger for 0." << endl;
//        return 1;
//    }
//
//    int* A = new int[M];
//
//    cout << "Enter " << M << " array elemnts:" << endl;
//    for (int i = 0; i < M; i++)
//    {
//        cin >> A[i];
//    }
//
//    int choice;
//    cout << "What to remove? (1 - even, 2 - odd): ";
//    cin >> choice;
//
//    if (choice != 1 && choice != 2)
//    {
//        cout << "Wrong choice!" << endl;
//        delete[] A;
//        return 1;
//    }
//
//    cout << "Result after removal:" << endl;
//    for (int i = 0; i < M; i++)
//    {
//        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0))
//        {
//            cout << A[i] << " ";
//        }
//    }
//    cout << endl;
//
//    delete[] A;*/
//
//
//
//    // Exercise 2
//    /*int M, N;
//
//    cout << "Enter the size of the array A (M): ";
//    cin >> M;
//
//    cout << "Enter the size of the array B (N): ";
//    cin >> N;
//
//    if (M <= 0 || N <= 0) 
//    {
//        cout << "Array sizes must be greater than 0." << endl;
//        return 1;
//    }
//
//    int* A = new int[M]; 
//    int* B = new int[N]; 
//    int* C = new int[M]; 
//    int sizeC = 0;
//
//    cout << "Enter " << M << " elements of array A:" << endl;
//    for (int i = 0; i < M; i++) 
//    {
//        cin >> A[i];
//    }
//
//    cout << "Enter " << N << " elements of array B:" << endl;
//    for (int i = 0; i < N; i++) 
//    {
//        cin >> B[i];
//    }
//
//    for (int i = 0; i < M; i++) 
//    {
//        if (!InArray(B, N, A[i]) && !InArray(C, sizeC, A[i])) 
//        {
//            C[sizeC++] = A[i];
//        }
//    }
//
//    cout << "Array C (elements from A that are not in B, no repetitions):" << endl;
//    for (int i = 0; i < sizeC; i++) 
//    {
//        cout << C[i] << " ";
//    }
//    cout << endl;
//
//    delete[] A;
//    delete[] B;
//    delete[] C;*/
//
//    // Exercise 3
//    /*int M, N;
//
//    cout << "Enter the size of the array A (M): ";
//    cin >> M;
//    cout << "Enter the size of the array B (N): ";
//    cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//    int* C = new int[M + N];
//    int sizeC = 0;
//
//    cout << "Enter the elements of array A:" << endl;
//    for (int i = 0; i < M; i++) cin >> A[i];
//
//    cout << "Enter the elements of array B:" << endl;
//    for (int i = 0; i < N; i++) cin >> B[i];
//
//    for (int i = 0; i < M; i++) 
//    {
//        if (!isInArray(B, N, A[i]) && !isInArray(C, sizeC, A[i])) 
//        {
//            C[sizeC++] = A[i];
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (!isInArray(A, M, B[i]) && !isInArray(C, sizeC, B[i])) 
//        {
//            C[sizeC++] = B[i];
//        }
//    }
//
//    cout << "Array C (unique elements of A and B that are not shared):" << endl;
//    for (int i = 0; i < sizeC; i++) 
//    {
//        cout << C[i] << " ";
//    }
//    cout << endl;
//
//    delete[] A;
//    delete[] B;
//    delete[] C;*/
//
//
//    // Exercise 4
//    // Стек — різновид лінійного списку, структура даних, яка працює за принципом «останнім прийшов — першим пішов».
//    // Динамічний розподіл пам'яті — спосіб виділення оперативної пам'яті комп'ютера для об'єктів у програмі, коли виділення пам'яті під об'єкт здійснюється під час виконання програми.
//    // Динамічно виділена пам'ять існує, поки її явно не звільнив програміст або збиральник сміття. Це відрізняється від статичного розподілу пам'яті, яка має фіксовану тривалість.
//    // Операції new і delete потрібні для створення та видалення динамічних об'єктів.
//
//
//
//
//
//    return 0;
//}