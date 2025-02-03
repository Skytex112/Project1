#pragma once
#include <iostream>
#include <map>
#include <string>

class Frequency_Dictionary 
{
public:
    void readFromInput();
    void printAllWords() const;
    void printMostFrequentWord() const;

    void writeToFile(const std::string& filename);

private:
    std::map<std::string, int> wordFrequency;
    void processWord(std::string& word);
};

