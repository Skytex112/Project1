#include "Frequency_dictionary.h"

using std::cout;
using std::cin;
using std::endl;

void Frequency_Dictionary::readFromInput() 
{
    std::string word;
    while (cin >> word) 
    { 
        processWord(word);
        wordFrequency[word]++;
    }
    cin.clear(); 
}

void Frequency_Dictionary::printAllWords() const 
{
    for (const auto& pair : wordFrequency) 
    {
        cout << pair.first << ": " << pair.second << endl;
    }
}

void Frequency_Dictionary::printMostFrequentWord() const 
{
    auto maxElement = wordFrequency.begin();
    for (auto it = wordFrequency.begin(); it != wordFrequency.end(); ++it) 
    {
        if (it->second > maxElement->second) 
        {
            maxElement = it;
        }
    }
    if (maxElement != wordFrequency.end()) 
    {
        cout << "Most frequent word: " << maxElement->first << " (" << maxElement->second << " times)" << endl;
    }
}



void Frequency_Dictionary::writeToFile(const std::string& filename) 
{
    std::ostream& file = cout; 
    for (const auto& pair : wordFrequency) 
    {
        file << pair.first << ": " << pair.second << endl;
    }
}

void Frequency_Dictionary::processWord(std::string& word) 
{
    for (size_t i = 0; i < word.size(); ++i) 
    {
        if (ispunct(word[i])) 
        {
            word.erase(i--, 1);
        }
        else 
        {
            word[i] = tolower(word[i]);
        }
    }
}