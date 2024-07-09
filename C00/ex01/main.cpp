#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;
    while (1) {
        std::cout << "Enter a command(ADD,SEARCH,EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else if (command == "EXIT") {
            break;
        }
    }
    
}