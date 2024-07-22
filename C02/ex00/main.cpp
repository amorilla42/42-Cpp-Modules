#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    a.setRawBits(42);
    Fixed b(a);
    Fixed c;

    c = b;
    a.setRawBits(666);

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}