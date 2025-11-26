#include <iostream> // Required for input/output operations

int main() {
    // Declare variables to store length, breadth, and area
    double length;
    double breadth;
    double area;

    // Prompt the user to enter the length
    std::cout << "Enter the length of the rectangle: ";
    // Read the length from the user
    std::cin >> length;

    // Prompt the user to enter the breadth
    std::cout << "Enter the breadth of the rectangle: ";
    // Read the breadth from the user
    std::cin >> breadth;

    // Calculate the area
    area = length * breadth;

    // Display the calculated area
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0; // Indicate successful program execution
}