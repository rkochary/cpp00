#include <iostream>
#include <stdio.h>

int main(int ac, char **av)
{
    std::string x = "djjkffdjgmlkfjfg;lfkgjfgkpgkbjg";

    int i = 1;
    int j = 0;
    if(ac >= 2)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                std::cout << static_cast<char>(std::toupper(av[i][j]));
                j++;
            }
                std::cout << ' ';
            i++; 
        }
            std::cout << std::endl;
    }
    else
    {
        std::cout << ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    }
     
}