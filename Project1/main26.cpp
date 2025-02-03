#include "phonebook.h"

using std::cout;

int main() {
    PhoneBook phoneBook;
    phoneBook.addContact("John Doe", "123456", "654321", "789012", "Friend");
    phoneBook.addContact("Jane Smith", "222333", "444555", "666777", "Colleague");

    cout << "All Contacts:\n";
    phoneBook.showAllContacts();

    cout << "Searching for Jane Smith:\n";
    phoneBook.searchContact("Jane Smith");

    cout << "Deleting John Doe:\n";
    phoneBook.deleteContact("John Doe");

    return 0;
}