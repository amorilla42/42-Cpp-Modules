# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{ 
    private:
        Contact contacts[8];
        int numContacts;
        int idxmax;
    public:
        void addContact();
        void searchContact();
        PhoneBook();
};


#endif