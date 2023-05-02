#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = -1;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add(std::string contact[5])
{
        index++;
    // for(index = 0;index < 5;index++)
    // {
        arr[index].setFirstName(contact[0]);
        arr[index].setLastName(contact[1]);
        arr[index].setNickName(contact[2]);
        arr[index].setPhoneNumber(contact[3]);
        arr[index].setDarkestSecret(contact[4]);
  //
}

void PhoneBook::search()
{
    std::string a = "ind";

    std::cout << index;
    std::cout << " | ";
    std::cout << arr[index].getFirstName();
    std::cout << " | ";
    std::cout << arr[index].getLastName();
    std::cout << " | ";
    std::cout << arr[index].getNickName();
    std::cout << " | ";
    std::cout << arr[index].getPhoneNumber();
    std::cout << " | ";
    std::cout << arr[index].getDarkestSecret();
    std::cout << std::endl;
}
