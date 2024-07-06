#include "PhoneBook.hpp"
#include <iostream>

void PhoneBook::addContact() {
    if (numContacts < 8) {
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
        
        do {
            std::cout << "Enter first name: ";
            std::cin >> firstName;
        } while (firstName.length() == 0);

        do {
            std::cout << "Enter last name: ";
            std::cin >> lastName;
        } while (lastName.length() == 0);

        do {
            std::cout << "Enter nickname: ";
            std::cin >> nickName;
        } while (nickName.length() == 0);

        do {
            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
        } while (phoneNumber.length() == 0);

        do {
            std::cout << "Enter darkest secret: ";
            std::cin >> darkestSecret;
        } while (darkestSecret.length() == 0);

        contacts[numContacts].setFirstName(firstName);
        contacts[numContacts].setLastName(lastName);
        contacts[numContacts].setNickName(nickName);
        contacts[numContacts].setPhoneNumber(phoneNumber);
        contacts[numContacts].setDarkestSecret(darkestSecret);
        numContacts++;
    } else {
        std::cout << "You have reached the maximum number of contacts." << std::endl;
    }
}