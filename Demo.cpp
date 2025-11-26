#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 

    std::string reversed_str = str; 
    std::reverse(reversed_str.begin(), reversed_str.end()); 

    if (str == reversed_str) {
        std::cout << "\"" << str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

