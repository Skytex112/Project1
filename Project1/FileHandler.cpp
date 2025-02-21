//#include "FileHandler.h"
//#include <iostream>
//#include <sstream>
//
//FileHandler::FileHandler(const std::string& path) : filePath(path) {}
//
//bool FileHandler::isFileExists() {
//    std::ifstream file(filePath);
//    return file.good();
//}
//
//int FileHandler::searchString(const std::string& searchStr) {
//    if (!isFileExists()) {
//        std::cout << "File not found!\n";
//        return -1;
//    }
//
//    std::ifstream file(filePath);
//    std::string line;
//    int count = 0;
//    int lineNum = 0;
//
//    while (std::getline(file, line)) {
//        lineNum++;
//        size_t pos = 0;
//        while ((pos = line.find(searchStr, pos)) != std::string::npos) {
//            count++;
//            std::cout << "Found in line " << lineNum << ", position " << pos << std::endl;
//            pos += searchStr.length();
//        }
//    }
//
//    return count;
//}
//
//int FileHandler::replaceString(const std::string& oldStr, const std::string& newStr) {
//    if (!isFileExists()) {
//        std::cout << "File not found!\n";
//        return -1;
//    }
//
//    std::ifstream inFile(filePath);
//    std::stringstream buffer;
//    buffer << inFile.rdbuf();
//    std::string content = buffer.str();
//    inFile.close();
//
//    int count = 0;
//    size_t pos = 0;
//    while ((pos = content.find(oldStr, pos)) != std::string::npos) {
//        content.replace(pos, oldStr.length(), newStr);
//        pos += newStr.length();
//        count++;
//    }
//
//    std::ofstream outFile(filePath);
//    outFile << content;
//
//    return count;
//}
//
//bool FileHandler::displayFile() {
//    if (!isFileExists()) {
//        std::cout << "File not found!\n";
//        return false;
//    }
//
//    std::ifstream file(filePath);
//    std::string line;
//
//    while (std::getline(file, line)) {
//        std::cout << line << std::endl;
//    }
//
//    return true;
//}
//
//bool FileHandler::reverseFile() {
//    if (!isFileExists()) {
//        std::cout << "File not found!\n";
//        return false;
//    }
//
//    std::ifstream inFile(filePath);
//    std::stringstream buffer;
//    buffer << inFile.rdbuf();
//    std::string content = buffer.str();
//    inFile.close();
//
//    std::reverse(content.begin(), content.end());
//
//    std::ofstream outFile(filePath);
//    outFile << content;
//
//    return true;
//}
