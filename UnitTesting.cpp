#include "UnitTesting.h"
#include <stdlib.h>

void assertTrue(bool a, const char* error) {
    if (!a) {
        std::cout << "ERROR: " << error << std::endl;
        exit(1);
    }
}

void assertFalse(bool a, const char* error) {
    if (a) {
        std::cout << "ERROR: " << error << std::endl;
        exit(1);
    }
}

void assertEqual(int a, int b, const char* error) {
    if (a != b) {
        std::cout << "ERROR: " << error << std::endl;
        exit(1);
    }
}

void assertEqual(double a, double b, const char* error) {
    if (a != b) {
        std::cout << "ERROR: " << error << std::endl;
        exit(1);
    }
}
