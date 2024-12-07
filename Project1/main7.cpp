//#include <iostream>
//
//using std::cout;
//using std::endl;
//
////Exersice 1
////bool prosto(int number) 
////{
////    bool result = false;
////
////    if (number <= 1) 
////    {
////        return result;
////    }
////    for (int i = 2; i * i <= number; i++) 
////    {
////        if (number % i == 0) 
////        {
////            return result;
////
////        }
////    }
////    result = true;
////    return result;
////}
//
//
//
////Exersice 2
////int num_step(int num, int step) 
////{
////    int result = 1;
////
////    if (step == 0) 
////    {
////        result = 1;
////    }
////    else if (step > 0) 
////    {
////        for (int i = 0; i < step; i++) 
////        {
////            result *= num;
////        }
////    }
////    else 
////    {
////        for (int i = 0; i < -step; i++) 
////        {
////            result *= num;
////        }
////        result = 1 / result;
////    }
////    return result;
////}
//
////Exersice 3
////int Amount_in_range(int num1, int num2) 
//// {
////    int sum = 0;
////    int start = num1;
////    int end = num2;
////
////    if (num1 > num2) 
//// {
////        start = num2;
////        end = num1;
////    }
////
////    for (int i = start; i <= end; i++) 
//// {
////        sum += i;
////    }
////    return sum;
////}
//
////Exersice 4
////void Perfect_numbers(int start, int end)
////{
////    cout << "Perfect numbers in the range from " << start << " to " << end << ": ";
////
////    for (int num = start; num <= end; num++) 
////    {
////        int sum = 0;
////
////        for (int i = 1; i <= num / 2; i++) 
////        {
////            if (num % i == 0) 
////            {
////                sum += i;
////            }
////        }
////        if (sum == num && num != 0) 
////        {
////            cout << num << " ";
////        }
////    }
////    cout << endl;
////}
//
////Exersice 5
////void printCard(char rank, char suit) 
////{
////    cout << "Your Cards: " << rank << " " << suit << endl;
////}
//
////Exersice 6
////int LuckyNumber(int number) 
////{
////    if (number < 100000 || number > 999999) 
////    {
////        cout << "The number must be six digits." << endl;
////        return;
////    }
////    int firstHalfSum = 0;
////    int secondHalfSum = 0;
////
////    firstHalfSum += number / 100000;       
////    firstHalfSum += (number / 10000) % 10; 
////    firstHalfSum += (number / 1000) % 10; 
////
////    secondHalfSum += (number / 100) % 10;  
////    secondHalfSum += (number / 10) % 10;   
////    secondHalfSum += number % 10;          
////
////    if (firstHalfSum == secondHalfSum)
////    {
////        cout << "Number " << number << " is happy." << endl;
////    }
////    else
////    {
////        cout << "Number " << number << " isn't happy." << endl;
////    }
////}
//
//
//int main()
//{
//    //Exersice 1
//    /*int number;
//    cout << "Enter number: ";
//    std::cin >> number;
//
//    if (prosto(number) && number > 10)
//    {
//        cout << number << " - Prostoe num." << endl;
//    }
//    else
//    {
//        cout << number << " - HE Prostoe num." << endl;
//    }*/
//
//    //Exersice 2
//    /*int num;
//    int step;
//
//    cout << "Enter num: ";
//    std::cin >> num;
//    cout << "Enter step: ";
//    std::cin >> step;
//
//    cout << "Result: " << num_step(num, step) << endl;*/
//
//    ////Exersice 3
//    /*int num1, num2;
//    cout << "Enter first number: ";
//    std::cin >> num1;
//    cout << "Enter second number: ";
//    std::cin >> num2;
//
//    cout << Amount_in_range(num1, num2);*/
//
//    ////Exersice 4
//    /*int start, end;
//    cout << "Enter the start of the range: ";
//    std::cin >> start;
//    cout << "Enter end of range: ";
//    std::cin >> end;
//
//    Perfect_numbers(start, end);*/
//
//    ////Exersice 5
//    /*char rank;
//    char suit;
//
//    cout << "Enter card value (2, 3, ..., 10, J, Q, K, A): ";
//    std::cin >> rank;
//
//    cout << "Enter card suit (hearts, diamonds, clubs, spades): ";
//    std::cin >> suit;
//
//    printCard(rank, suit);*/
//
//    ////Exersice 6
//   /* int number;
//    cout << "Enter a six-digit number: ";
//    std::cin >> number;
//
//    LuckyNumber(number);*/
//    
//}
//
////int main() 
////{
////    bool num;
////    std::cin >> num;
////    cout << num;
////
////
////
////}