#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = -1;
    count = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::align(std::string str)
{
        std::string result;
         if(str.length() <= 10)
            std::cout << std::setw(10) << str << "|";
        else
            std::cout << str.substr(0, 9) << ".|";

}

void PhoneBook::add(std::string contact[5])
{
    index++;
    if(index > 7)
        index = 0;
    if(count != 8)
        count++;
    arr[index].setFirstName(contact[0]);
    arr[index].setLastName(contact[1]);
    arr[index].setNickName(contact[2]);
    arr[index].setPhoneNumber(contact[3]);
    arr[index].setDarkestSecret(contact[4]);
}

void PhoneBook::findIndex(std::string i)
{
    int num = atoi(i.c_str());
    if(num >= count || !(i >= "0" && i <= "7"))
    {
        std::cout << "Index is not found" << std::endl;
    }
    else
    {
        align(arr[num].getFirstName());
        align(arr[num].getLastName());
        align(arr[num].getNickName());
        std::cout << std::endl;
    }
}

void PhoneBook::search()
{
    std::string a;
    for(int i = 0;i < count;i++)
    {
        std::cout << std::setw(10) << i << "|";
        align(arr[i].getFirstName());
        align(arr[i].getLastName());
        align(arr[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the index number ";
    getline(std::cin, a);
    findIndex(a);
}
