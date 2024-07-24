#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    return (*this);
}

void Brain::setIdea(int index, std::string idea)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return (ideas[index]);
}

