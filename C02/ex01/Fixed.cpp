#include "Fixed.hpp"

Fixed::Fixed() : _integerValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->_integerValue = raw << this->_fractionalBits;
}

Fixed::Fixed(float const raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->_integerValue = roundf(raw * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &fixed)
        this->_integerValue = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_integerValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_integerValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_integerValue / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_integerValue >> this->_fractionalBits;
}