#include "Contact.hpp"

void Contact::setFirstName(std::string str)
{
    firstName = str;
}

std::string Contact::getFirstName() {return firstName;}

int main()
{
    Contact obj;
    
    obj.setFirstName("gajh");
    std::cout << obj.getFirstName();
}