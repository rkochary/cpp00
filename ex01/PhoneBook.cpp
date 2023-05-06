#include "PhoneBook.hpp"
#include <typeinfo>

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

        // if(str.length() > 10)
        // {
        //     result = str.substr(str[0],str[9]).append(".");
        // }
        // else if(str.length() < 10)
        // {
        //     int deference = 10 - str.length();
        //     while(i < deference)
        //     {
        //         result += " ";
        //         i++;
        //     }
        //     result + str;
        // }
        // std::cout << result << std::endl;
         if(str.length() <= 10)
            std::cout << std::setw(10) << str << "|";
        else
            std::cout << str.substr(0, 9) << ".|";

}

void PhoneBook::add(std::string contact[5])
{
    //bool isInteger = true;
    index++;
    if(index > 7)
        index = 0;
    if(count != 8)
        count++;
    // while(index <= 7)
    // {
    //     if(index == 7)
    //         index = -1;
    //     index++;
    //     size++;
    // }
    //  for(index = 0;index < 5;index++)
    //  {   

            arr[index].setFirstName(contact[0]);
            arr[index].setLastName(contact[1]);
            arr[index].setNickName(contact[2]);
            arr[index].setPhoneNumber(contact[3]);
            arr[index].setDarkestSecret(contact[4]);
            
  //   }

}

void PhoneBook::findIndex(std::string i)
{
    int num = atoi(i.c_str());
    if(num >= count || !(i >= "0" && i <= "7"))
    {
        std::cout << "Index is not finded" << std::endl;
    }
    else
    {
        align(arr[num].getFirstName());
        align(arr[num].getLastName());
        align(arr[num].getNickName());
        std::cout << std::endl;
    }
   // std::cout << arr[i].getNickName() << std::endl;
}

void PhoneBook::search()
{
    std::string a;
    //std::cout << index;
    for(int i = 0;i < count;i++)
    {
    //std::cout << i;
    std::cout << std::setw(10) << i << "|";
    // if(i < 10)
    // {
    //     std::cout << "        |";
    // }
    // else if(i >= 10 && i < 100)
    // {
    //     std::cout << "       |";
    // }
    align(arr[i].getFirstName());
    align(arr[i].getLastName());
    align(arr[i].getNickName());
    std::cout << std::endl;
    }
    // std::cout << index;
    // std::cout << " | ";
    // std::cout << arr[index].getFirstName();
    // std::cout << " | ";
    // std::cout << arr[index].getLastName();
    // std::cout << " | ";
    // std::cout << arr[index].getNickName();
    // std::cout << " | ";
    // std::cout << arr[index].getPhoneNumber();
    // std::cout << " | ";
    // std::cout << arr[index].getDarkestSecret();
    std::cout << std::endl;
    std::cout << "Enter index number ";
    // std::cin >> a;
    getline(std::cin, a);

     findIndex(a);
}
