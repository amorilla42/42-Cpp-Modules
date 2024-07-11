#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char const *argv[]) {

    if (argc != 4) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cout << "File not found" << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content += line + "\n";
    }
    inFile.close();

    std::string result;
    size_t pos = 0, lastPos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) { // Find position of s1 in content
        result += content.substr(lastPos, pos - lastPos) + s2; // Append part before s1 and s2
        pos += s1.length();
        lastPos = pos; // Update lastPos to the end of the replaced part
    }
    result += content.substr(lastPos); // Append the remaining part of the string
    content = result; // Replace original content with the modified one

    std::ofstream outFile((filename+ ".replace").c_str());
    outFile << content; // Write modified content to file
    outFile.close();

    return 0;
}