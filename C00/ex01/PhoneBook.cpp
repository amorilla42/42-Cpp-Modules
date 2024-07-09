#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    numContacts = 0;
    idxmax = 0;
}

void PhoneBook::addContact() {
    if (numContacts > 7) 
       numContacts = 0;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
        
    do {
        std::cout << "Enter first name: ";
        std::getline(std::cin, firstName);
    } while (firstName.length() == 0);

    do {
        std::cout << "Enter last name: ";
        std::getline(std::cin,lastName);
    } while (lastName.length() == 0);

    do {
        std::cout << "Enter nickname: ";
        std::getline(std::cin,nickName);
    } while (nickName.length() == 0);

    do {
        std::cout << "Enter phone number: ";
        std::getline(std::cin,phoneNumber);
    } while (phoneNumber.length() == 0);

    do {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin,darkestSecret);
    } while (darkestSecret.length() == 0);

    contacts[numContacts].setFirstName(firstName);
    contacts[numContacts].setLastName(lastName);
    contacts[numContacts].setNickName(nickName);
    contacts[numContacts].setPhoneNumber(phoneNumber);
    contacts[numContacts].setDarkestSecret(darkestSecret);
    numContacts++;
    if (idxmax < 8)
        idxmax++;
}

std::string truncate(std::string str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContact() {

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < idxmax; i++)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
			<< std::setw(10) <<  truncate(contacts[i].getLastName()) << "|"
			<< std::setw(10) <<  truncate(contacts[i].getNickName()) << std::endl;
	}

    std::string index;
    std::cout << "Enter index: ";
    std::getline(std::cin, index);
    if (index.length() == 1 && index[0] >= '0' && index[0] <= '7') {
        int i = index[0] - '0';
        if (contacts[i].getFirstName().length() > 0) {
            std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
            std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[i].getNickName() << std::endl;
            std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
            std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
        } else {
            std::cout << "Contact not found" << std::endl;
        }
    } else {
        std::cout << "Invalid index" << std::endl;
    }
}