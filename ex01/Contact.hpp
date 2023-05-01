#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setPhoneNumber(std::string PhoneNumber);
        void setDatkestSecret(std::string darkestSecret);

        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDatkestSecret();
};

#endif