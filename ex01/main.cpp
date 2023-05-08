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
        if (std::cin.eof())
			return 1;
        if(input[0])
        {

            if (input.compare("ADD") == 0)
            {
                for(int i = 0;i < 5;i++)
                {
                    if(i == 0)
                    {
                        std::cout << std::setw(10) << "First Name \t" << "|  ";
                        getline(std::cin, name[i]);
                    }
                    else if (i == 1)
                    {
                        std::cout << std::setw(10) << "Last Name \t" << "|  ";
                        getline(std::cin, name[i]);
                    }
                    else if(i == 2)
                    {
                        std::cout << std::setw(10) << "Nickname \t" << "|  ";
                        getline(std::cin, name[i]);
                    }
                    else if(i == 3)
                    {
                        std::cout << std::setw(10) << "Phone Number \t" << "|  ";
                        getline(std::cin, name[i]);
                        for (std::string::iterator it = name[i].begin(); it != name[i].end(); ++it) 
                        {
                            if(!isdigit(*it))
                            {
                                    std::cout << "Error: Phone number must contain only integers." << std::endl << std::endl;;
                                    i = -1;
                                    break;
                            }
                        }
                    }
                    else if (i == 4)
                    {                        
                        std::cout << std::setw(10) << "Darkest Secret \t" << "|  ";
                        getline(std::cin, name[i]);
                    }
                    
                }
                        std::cout << "Print the command" << std::endl << ">: ";
                        obj.add(name);
            }
            else if(input.compare("SEARCH") == 0)
            {
                obj.search();
                std::cout << "Print the command" << std::endl << ">: ";
            }
            else if(input.compare("EXIT") == 0)
            {
                 return 0;
                break ;
            }
            else
                std::cout << " Not valid command " << std::endl << ">: ";
        }
    }
    return 0;    
}