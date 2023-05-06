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
        std::string getName(){return arr[0].getFirstName();}
        std::string getLast(){return arr[0].getLastName();}
        std::string getNick(){return arr[0].getNickName();}
        std::string getPhone(){return arr[0].getPhoneNumber();}
        std::string getSecret(){return arr[0].getDarkestSecret();}
        void add(std::string contact[5]);
        void search();
        void align(std::string str);
        void findIndex(std::string i);
};

#endif