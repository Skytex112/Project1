#pragma once
#include "Contacts.h"

class PhoneBook 
{
private:
    Contacts* contacts[100];
    int contactCount;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact(const char* name, const char* home, const char* work, const char* mobile, const char* info);
    void deleteContact(const char* name);
    void searchContact(const char* name) const;
    void showAllContacts() const;
};
