#include "Fixed.hpp"

int main(void)
{
    Fixed a(42.42f);
    Fixed b(78);
    Fixed c(33.4324242f);

    std::cout << "value of a " << a << std::endl;
    std::cout << "value of b " << b << std::endl;
    std::cout << "value of c " << c << std::endl;

    std::cout << "a to int " << a.toInt() << std::endl;
    std::cout << "b to float " << b.toFloat() << std::endl;
    std::cout << "c to int " << c.toInt() << std::endl;

    return 0;
}