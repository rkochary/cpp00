#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>


class PhoneBook
{
    Contact arr[8];
    int index;
    int count;

    public:
        PhoneBook();
        ~PhoneBook();
        void add(std::string contact[5]);
        void search();
        void align(std::string str);
        void findIndex(std::string i);
};

#endif