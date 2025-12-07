#include <iostream> // Required for input/output operations

int main() {
    // Declare variables to store length, width, and area
    double length; 
    double width;
    double area;

    // Prompt the user to enter the length
    std::cout << "Enter the length of the rectangle: ";
    // Read the length from user input
    std::cin >> length;

    // Prompt the user to enter the width
    std::cout << "Enter the width of the rectangle: ";
    // Read the width from user input
    std::cin >> width;

    // Calculate the area using the formula: area = length * width
    area = length * width;

    // Display the calculated area to the user
    std::cout << "The area of the rectangle is: " << area << std::endl;

    // Indicate successful program execution
    return 0; 
}

