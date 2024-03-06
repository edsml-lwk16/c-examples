#include "AskingName.h"

#include <iostream> // Include the library that allows us to use cin and cout

// Constructor definition for the AskingName class
AskingName::AskingName() {
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "Hello " << name << "!\n";
}

