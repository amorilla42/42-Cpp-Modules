#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    std::string message;
    for (int i = 1; i < argc; i++) {
        message += argv[i];
        if (i != argc - 1) {
            message += " ";
        }
    }
    size_t i = 0;
    while (i < message.length()) {
        if (isalpha(message[i]))
            message[i] = std::toupper(message[i]);
        i++;
    }
    std::cout << message << std::endl;
    return 0;
}