# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _integerValue;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(int const raw);
        Fixed(float const raw);

        ~Fixed();

        Fixed &operator=(const Fixed &fixed);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

# endif