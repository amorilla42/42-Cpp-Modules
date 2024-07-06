# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{ 
    private:
        Contact contacts[8];
        int numContacts;
        int ContactIndex;
    public:
        void addContact();
        void searchContact();
};


#endif