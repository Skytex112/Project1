#include "frequency_dictionary.h"

using std::cout;

int main() {
    Frequency_Dictionary dict;
    cout << "Enter text (Ctrl+D or Ctrl+Z to stop input):\n";
    dict.readFromInput();

    cout << "\nWord Frequencies:\n";
    dict.printAllWords();

    cout << "\nMost Frequent Word:\n";
    dict.printMostFrequentWord();

    return 0;
}