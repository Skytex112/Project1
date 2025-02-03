#pragma once
#include <iostream>

class Contacts 
{
private:
    char* name;
    char homePhone[20];
    char workPhone[20];
    char mobilePhone[20];
    char additionalInfo[100];

public:
    Contacts(const char* name, const char* home, const char* work, const char* mobile, const char* info);
    ~Contacts();
    const char* getName() const;
    void print() const;
};

