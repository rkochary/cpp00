#include "PhoneBook.hpp"

int main()
{
    PhoneBook obj;
    std::string name[5];
    std::string input;



    while(1)
    {
        getline(std::cin, input);
        if (input.compare("ADD") == 0)
        {
            std::cout << "first name " << "| ";
            std::cin >> name[0];
            std::cout << "last name " << "| ";
            std::cin >> name[1];
            std::cout << "nick name " << "| ";
            std::cin >> name[2];
            std::cout << "phone number " << "| ";
            std::cin >> name[3];
            std::cout << "secret " << "| ";
            std::cin >> name[4];
            obj.add(name);
        }
        else if(input.compare("SEARCH") == 0)
        {
            obj.search();
        }
        else if(input.compare("EXIT") == 0)
        {
            return 0;
            break ;
        }
    // std::cout << obj.getName();
    // std::cout << std::endl;
    // std::cout << obj.getLast();
    // std::cout << std::endl;
    // std::cout << obj.getNick();
    // std::cout << std::endl;
    // std::cout << obj.getPhone();
    // std::cout << std::endl;
    // std::cout << obj.getSecret();
    // std::cout << std::endl;
    }

    obj.search();
    
}