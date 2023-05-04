#include "PhoneBook.hpp"

int main()
{
    PhoneBook obj;
    std::string name[5];
    std::string input;
    while(1)
    {
       std::cin.clear();
        if(input.empty())
            std::cout << "Print the command" << std::endl << ">: ";
        getline(std::cin, input);
       //std::cin >> input;
        if (std::cin.eof())
			return 1;
        if(input[0])
        {

            if (input.compare("ADD") == 0)
            {
                std::cout << std::setw(10) << "first name \t" << "|  ";
               // std::cout << "first name " << "| ";
                //getline(std::cin, name[0]);
                std::cin >> name[0];
                std::cout << std::setw(10) << "last name \t" << "|  ";
               // std::cout << "last name " << "| ";
               // getline(std::cin, name[1]);
                std::cin >> name[1];
                std::cout << std::setw(10) << "nick name \t" << "|  ";
                //std::cout << "nick name " << "| ";
               // getline(std::cin, name[2]);
                std::cin >> name[2];
                std::cout << std::setw(10) << "phone number \t" << "|  ";
                //std::cout << "phone number " << "| ";
               // getline(std::cin, name[3]);
                std::cin >> name[3];
                std::cout << std::setw(10) << "darkest secret \t" << "|  ";
                //std::cout << "darkest secret" << "| ";
             //   getline(std::cin, name[4]);
                std::cin >> name[4];
          //  std::cout << "Print the command";
            std::cout << std::endl;
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
            else
            std::cout << " Not valid command! " << std::endl << ">: ";
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

    // obj.search();
    
}