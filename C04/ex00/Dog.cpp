#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    type = copy.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "guau owo" << std::endl;
}

