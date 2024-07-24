#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c;


    std::cout << "value of a " << a << std::endl;
    std::cout << "value of b " << b << std::endl;
    std::cout << "value of c " << c << std::endl;

    if ( a == c )
        std::cout << "a is equals to c" << std::endl;
    if ( a != b )
        std::cout << "a is different from b" << std::endl;
    if ( b >= c )
        std::cout << "b is greater or equals to c" << std::endl;
    if ( c <= b )
        std::cout << "c is less or equals to b" << std::endl;
    if ( b > c )
        std::cout << "b is greater than c" << std::endl;
    if ( b < c )
        std::cout << "b is less than c" << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl<< std::endl;

    std::cout << a << std::endl;
    std::cout << a++ << std::endl<< std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    return 0;
}