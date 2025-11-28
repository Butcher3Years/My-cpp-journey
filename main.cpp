#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); // Read the entire line including spaces

    // Create a reversed copy of the string
    std::string reversed_str = str;
    std::reverse(reversed_str.begin(), reversed_str.end());

    // Compare the original and reversed strings
    if (str == reversed_str) {
        std::cout << "\"" << str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str << "\" is not a palindrome." << std::endl;
    }

    return 0;
}