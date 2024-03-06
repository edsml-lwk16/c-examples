#include "Hello_World.h"
#include "prime.h"
// #include "AskingName.h"

#include <iostream> // Include the library that allows us to use cin and cout

int main() {
    HelloWorld();
    std::cout << std::endl;   // Adds an empty line between hello world and prime numbers
    
    Prime_numbers myPrime;  // Creating an object of the Prime_numbers class
    myPrime.printPrime();   // Calling the printPrime function
    
    // AskingName();

    return 0;
}