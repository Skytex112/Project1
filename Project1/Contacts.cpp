#include "Contacts.h"
Contacts::Contacts(const char* name, const char* home, const char* work, const char* mobile, const char* info) 
{
    int length = 0;
    while (name[length] != '\0') ++length;
    this->name = new char[length + 1];
    for (int i = 0; i < length; ++i) this->name[i] = name[i];
    this->name[length] = '\0';

    int i = 0;
    while ((homePhone[i] = home[i]) != '\0') ++i;
    i = 0;
    while ((workPhone[i] = work[i]) != '\0') ++i;
    i = 0;
    while ((mobilePhone[i] = mobile[i]) != '\0') ++i;
    i = 0;
    while ((additionalInfo[i] = info[i]) != '\0') ++i;
}

Contacts::~Contacts() 
{
    delete[] name;
}

const char* Contacts::getName() const { return name; }

void Contacts::print() const 
{
    std::cout << "Name: " << name << "\nHome: " << homePhone
        << "\nWork: " << workPhone << "\nMobile: " << mobilePhone
        << "\nInfo: " << additionalInfo << "\n";
}