#include <iostream>

// Program starts here
int main() {
    // Declare variable for user's name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, world from " << name << "!" << std::endl;
    return 0;
}
