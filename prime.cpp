#include "prime.h"
#include <iostream>

// Constructor implementation
Prime_numbers::Prime_numbers() {
    // Constructor code (if any)
}

void Prime_numbers::printPrime() { // Member function implementation
    for (int i=2; i<20; i++) {
        int j = 2;
        bool flag = true;
        while (j*j<=i) {
            if (i%j==0) {
                flag = false;
                break;
            }
            j++;
        }
        if (flag) {
            std::cout << i << std::endl;
        }
    }
}