#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animals[4];
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();
    
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << std::endl;

    return (0);
}
