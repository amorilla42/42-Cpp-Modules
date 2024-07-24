#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    type = copy.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}


