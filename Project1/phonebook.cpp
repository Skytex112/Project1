#include "phonebook.h"

using std::cout;


PhoneBook::PhoneBook() : contactCount(0) {}

PhoneBook::~PhoneBook() 
{
    for (int i = 0; i < contactCount; ++i)
        delete contacts[i];
}

void PhoneBook::addContact(const char* name, const char* home, const char* work, const char* mobile, const char* info) {
    if (contactCount < 100)
        contacts[contactCount++] = new Contacts(name, home, work, mobile, info);
}

void PhoneBook::deleteContact(const char* name) 
{
    for (int i = 0; i < contactCount; ++i) 
    {
        int j = 0;
        while (contacts[i]->getName()[j] == name[j] && contacts[i]->getName()[j] != '\0' && name[j] != '\0')
            ++j;
        if (contacts[i]->getName()[j] == '\0' && name[j] == '\0') 
        {
            delete contacts[i];
            for (int k = i; k < contactCount - 1; ++k)
                contacts[k] = contacts[k + 1];
            --contactCount;
            cout << "Deleted successfully.\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

void PhoneBook::searchContact(const char* name) const 
{
    for (int i = 0; i < contactCount; ++i) 
    {
        int j = 0;
        while (contacts[i]->getName()[j] == name[j] && contacts[i]->getName()[j] != '\0' && name[j] != '\0')
            ++j;
        if (contacts[i]->getName()[j] == '\0' && name[j] == '\0') 
        {
            contacts[i]->print();
            return;
        }
    }
    cout << "Contact not found.\n";
}

void PhoneBook::showAllContacts() const {
    for (int i = 0; i < contactCount; ++i) {
        contacts[i]->print();
        cout << "----------------------\n";
    }
}