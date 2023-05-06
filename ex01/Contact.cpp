#include "Contact.hpp"

void Contact::setFirstName(std::string str)
{
    
    firstName = str;
}

void Contact::setLastName(std::string str)
{
    lastName = str;
}

void Contact::setNickName(std::string str)
{
    nickName = str;
}

// void Contact::setPhoneNumber(std::string str)
// {
//     phoneNumber = str;
// }


void Contact::setPhoneNumber(std::string str)
{
    bool isInteger = true;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) 
    {
        if (!isdigit(*it)) 
        {
            isInteger = false;
            break;
        }
    }
    if (isInteger) 
    {
        phoneNumber = str;
    }
    else
    {
        std::cout << "Error: Phone number must contain only integers." << std::endl << "Print the command" << std::endl << ">: ";

    }
}

void Contact::setDarkestSecret(std::string str)
{
    darkestSecret = str;
}

std::string Contact::getFirstName() {return firstName;}
std::string Contact::getLastName() {return lastName;}
std::string Contact::getNickName() {return nickName;}
std::string Contact::getPhoneNumber() {return phoneNumber;}
std::string Contact::getDarkestSecret() {return darkestSecret;}
