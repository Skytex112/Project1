//#include "Student.h"
//
//
//void Student::AllocateAndCopy(char*& dest, const char* source) 
//{
//    int length = 0;
//    while (source[length] != '\0') ++length; 
//    dest = new char[length + 1];            
//    for (int i = 0; i < length; ++i)         
//        dest[i] = source[i];
//    dest[length] = '\0';                    
//}
//
//Student::Student() : Student("Unknown", "Unknown", Contact(), Collage()) {}
//
//Student::Student(const char* fullName, const char* birthDate, const Contact& contact, const Collage& collage): contact(contact), collage(collage) 
//{
//    AllocateAndCopy(this->fullName, fullName);
//    AllocateAndCopy(this->birthDate, birthDate);
//}
//
//Student::~Student() 
//{
//    delete[] fullName;
//    delete[] birthDate;
//}
//
//void Student::Show() const 
//{
//    std::cout << "PIB: " << fullName << "\n";
//    std::cout << "Date of birth: " << birthDate << "\n";
//    std::cout << "Contact information:\n";
//    contact.Show();
//    std::cout << "Information about the college:\n";
//    collage.Show();
//}
