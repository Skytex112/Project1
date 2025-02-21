//#include <iostream>
//#include "FileHandler.h"
//
//void displayMenu() {
//    std::cout << "Menu:\n";
//    std::cout << "1. Search for string\n";
//    std::cout << "2. Replace string\n";
//    std::cout << "3. Display file contents\n";
//    std::cout << "4. Reverse file contents\n";
//    std::cout << "0. Exit\n";
//    std::cout << "Select option: ";
//}
//
//int main() {
//    std::string filePath = "Example.txt";
//
//    FileHandler handler(filePath);
//    int choice;
//
//    do {
//        displayMenu();
//        std::cin >> choice;
//        std::cin.ignore();
//
//        switch (choice) {
//        case 1: {
//            std::string searchStr;
//            std::cout << "Enter string to search: ";
//            std::getline(std::cin, searchStr);
//
//            int count = handler.searchString(searchStr);
//            if (count >= 0) {
//                std::cout << "Found " << count << " matches\n";
//            }
//            break;
//        }
//        case 2: {
//            std::string oldStr, newStr;
//            std::cout << "Enter string to replace: ";
//            std::getline(std::cin, oldStr);
//            std::cout << "Enter new string: ";
//            std::getline(std::cin, newStr);
//
//            int count = handler.replaceString(oldStr, newStr);
//            if (count >= 0) {
//                std::cout << "Performed " << count << " replacements\n";
//            }
//            break;
//        }
//        case 3: {
//            std::cout << "\nFile contents:\n";
//            handler.displayFile();
//            break;
//        }
//        case 4: {
//            if (handler.reverseFile()) {
//                std::cout << "File successfully reversed\n";
//            }
//            break;
//        }
//        case 0:
//            std::cout << "Program terminated\n";
//            break;
//        default:
//            std::cout << "Invalid choice!\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}