#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongJ = new WrongCat();

    std::cout << std::endl;

    meta->makeSound(); // will output the sound of Animal
    j->makeSound(); // will output the sound of Dog
    i->makeSound(); // will output the sound of Cat
    wrongMeta->makeSound(); // will output the sound of WrongAnimal
    wrongJ->makeSound(); // will output the sound of WrongCat

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;

    return 0;
}