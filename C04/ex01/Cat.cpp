#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor" << std::endl;
    brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    type = copy.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miau uwu" << std::endl;
}
