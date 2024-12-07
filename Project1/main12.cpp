//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//
//int mystrlen(const char* str) 
//{
//    int length = 0;
//    while (*str++) 
//    {
//        length++;
//    }
//    return length;
//}
//
//char* mystrcpy(char* str1, const char* str2) 
//{
//    char* dest = str1;
//    while ((*dest++ = *str2++) != '\0');
//    return str1;
//}
//
//char* mystrcat(char* str1, const char* str2) 
//{
//    char* dest = str1 + mystrlen(str1); 
//    while ((*dest++ = *str2++) != '\0');
//    return str1;
//}
//
//char* mystrchr(char* str, char s) 
//{
//    while (*str) 
//    {
//        if (*str == s) 
//        {
//            return str;
//        }
//        str++;
//    }
//    return nullptr;
//}
//
//char* mystrstr(char* str1, const char* str2) 
//{
//    int len1 = mystrlen(str1);
//    int len2 = mystrlen(str2);
//
//    if (len2 == 0) 
//        return str1; 
//
//    for (int i = 0; i <= len1 - len2; i++)
//    {
//        bool match = true;
//        for (int j = 0; j < len2; j++) 
//        {
//            if (str1[i + j] != str2[j]) 
//            {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            return &str1[i];
//        }
//    }
//    return nullptr;
//}
//
//int mystrcmp(const char* str1, const char* str2) 
//{
//    while (*str1 && (*str1 == *str2)) 
//    {
//        str1++;
//        str2++;
//    }
//    return (*str1 > *str2) - (*str1 < *str2); 
//}
//
//int StringToNumber(char* str) 
//{
//    int num = 0;
//    bool isNegative = false;
//
//    if (*str == '-') 
//    {
//        isNegative = true;
//        str++;
//    }
//
//    while (*str) 
//    {
//        num = num * 10 + (*str - '0');
//        str++;
//    }
//
//    return isNegative ? -num : num;
//}
//
//char* NumberToString(int number, char* buffer) 
//{
//    bool isNegative = number < 0;
//    if (isNegative) 
//    {
//        number = -number;
//    }
//
//    int i = 0;
//    do 
//    {
//        buffer[i++] = (number % 10) + '0';
//        number /= 10;
//    } while (number > 0);
//
//    if (isNegative) 
//    {
//        buffer[i++] = '-';
//    }
//    buffer[i] = '\0';
//
//    for (int j = 0; j < i / 2; j++) 
//    {
//        char temp = buffer[j];
//        buffer[j] = buffer[i - j - 1];
//        buffer[i - j - 1] = temp;
//    }
//
//    return buffer;
//}
//
//char* Uppercase(char* str1) 
//{
//    char* temp = str1;
//    while (*temp) 
//    {
//        if (*temp >= 'a' && *temp <= 'z') 
//        {
//            *temp -= 'a' - 'A';
//        }
//        temp++;
//    }
//    return str1;
//}
//
//char* Lowercase(char* str1) 
//{
//    char* temp = str1;
//    while (*temp) 
//    {
//        if (*temp >= 'A' && *temp <= 'Z') 
//        {
//            *temp += 'a' - 'A';
//        }
//        temp++;
//    }
//    return str1;
//}
//
//char* mystrrev(char* str) 
//{
//    int len = mystrlen(str);
//    for (int i = 0; i < len / 2; i++) 
//    {
//        char temp = str[i];
//        str[i] = str[len - i - 1];
//        str[len - i - 1] = temp;
//    }
//    return str;
//}
//
//int main() 
//{
//    char str1[100], str2[100], buffer[100];
//    int number;
//
//    cout << "Enter a string for mystrlen: ";
//    std::cin >> str1;
//    cout << "String length: " << mystrlen(str1) << "\n";
//
//    cout << "Enter a string for mystrcpy: ";
//    std::cin >> str2;
//    mystrcpy(str1, str2);
//    cout << "A copy of the row: " << str1 << "\n";
//
//    cout << "Enter a string for mystrcat: ";
//    std::cin >> str2;
//    mystrcat(str1, str2);
//    cout << "Line after addition: " << str1 << "\n";
//
//    cout << "Enter the number as a string: ";
//    std::cin >> str1;
//    number = StringToNumber(str1);
//    cout << "Convert to a number: " << number << "\n";
//
//    cout << "A number to convert to a string: ";
//    std::cin >> number;
//    cout << "String: " << NumberToString(number, buffer) << "\n";
//
//    return 0;
//}
