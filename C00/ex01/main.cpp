#include "Contact.hpp"
#include <iostream>

int main() {
    Contact contacts[8];
    int i = 0;
    while (i < 8) {
        std::string input;
        std::cout << "Enter a command: ";
        std::cin >> input;
        if (input == "EXIT") {
            break;
        } else if (input == "ADD") {
            if (i < 8) {
                std::string firstName;
                std::string lastName;
                std::string nickName;
                std::string phoneNumber;
                std::string darkestSecret;
                std::cout << "Enter first name: ";
                std::cin >> firstName;
                std::cout << "Enter last name: ";
                std::cin >> lastName;
                std::cout << "Enter nickname: ";
                std::cin >> nickName;
                std::cout << "Enter phone number: ";
                std::cin >> phoneNumber;
                std::cout << "Enter darkest secret: ";
                std::cin >> darkestSecret;
                contacts[i].setFirstName(firstName);
                contacts[i].setLastName(lastName);
                contacts[i].setNickName(nickName);
                contacts[i].setPhoneNumber(phoneNumber);
                contacts[i].setDarkestSecret(darkestSecret);
                i++;
            } else {
                std::cout << "You have reached the maximum number of contacts." << std::endl;
            }
        } else if (input == "SEARCH") {
            if (i == 0) {
                std::cout << "You have no contacts." << std::endl;
            } else {
                std::cout << "     index|first name| last name|  nickname" << std::endl;
                for (int j = 0; j < i; j++) {
                    std::cout << "         " << j << "|";
                    std::string firstName = contacts[j].getFirstName();
                    std::string lastName = contacts[j].getLastName();
                    std::string nickName = contacts[j].getNickName();
                    if (firstName.length() > 10) {
                        std::cout << firstName.substr(0, 9) << ".|";
                    } else {
                        std::cout << firstName;
                        for (int k = 0; k < 10 - firstName.length(); k++) {
                            std::cout << " ";
                        }
                        std::cout << "|";
                    }
                    if (lastName.length() > 10) {
}