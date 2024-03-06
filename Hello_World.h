#ifndef HelloWorld_h
#define HelloWorld_h

#include <iostream> // Include the library that allows us to use cin and cout

// A contructor is a member function that is automatically called when 
// an object of the class is created. It's purpose is to initialize the
// object. In this case, the constructor will print the (Hello World) greeting.

class HelloWorld{
public:
    HelloWorld(); // Constructor

    void printGreeting(); // Member function to print the greeting
};

#endif // HelloWorld_h

/* The comment at the end ("// AskingName_h") is just there to provide a human-readable 
identifier for the corresponding #ifndef directive. 
It's a good practice to include comments after #endif to indicate 
which conditional compilation block it corresponds to*/