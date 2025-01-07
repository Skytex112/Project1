//#include "Collage.h"
//
//void Collage::AllocateAndCopy(char*& dest, const char* source) 
//{
//    int length = 0;
//    while (source[length] != '\0') ++length; 
//    dest = new char[length + 1];             
//    for (int i = 0; i < length; ++i)         
//        dest[i] = source[i];
//    dest[length] = '\0';                     
//}
//
//Collage::Collage() : Collage("Unknown", Contact()) {}
//
//Collage::Collage(const char* name, const Contact& contact) : contact(contact) 
//{
//    AllocateAndCopy(this->name, name);
//}
//
//Collage::~Collage() 
//{
//    delete[] name;
//}
//
//void Collage::Show() const 
//{
//    std::cout << "Name of the college: " << name << "\n";
//    std::cout << "Contact information:\n";
//    contact.Show();
//}
