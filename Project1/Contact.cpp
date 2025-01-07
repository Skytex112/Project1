//#include "Contact.h"
//
//void Contact::AllocateAndCopy(char*& dest, const char* source) 
//{
//    int length = 0;
//    while (source[length] != '\0') ++length; 
//    dest = new char[length + 1];             
//    for (int i = 0; i < length; ++i)         
//        dest[i] = source[i];
//    dest[length] = '\0';                     
//}
//
//Contact::Contact() : Contact("Unknown", "Unknown", "Unknown") {}
//
//Contact::Contact(const char* phone, const char* city, const char* country) 
//{
//    AllocateAndCopy(this->phone, phone);
//    AllocateAndCopy(this->city, city);
//    AllocateAndCopy(this->country, country);
//}
//
//Contact::~Contact() 
//{
//    delete[] phone;
//    delete[] city;
//    delete[] country;
//}
//
//void Contact::Show() const 
//{
//    std::cout << "Telefon: " << phone << "\n";
//    std::cout << "City: " << city << "\n";
//    std::cout << "Country: " << country << "\n";
//}