// In C++, preprocessor directives are commands that provide instructions 
// to the preprocessor, which is a text-processing tool that operates 
// before the actual compilation of the code. Preprocessor directives start 
// with a # symbol and are processed before the main compilation step.
#include <iostream>

// Define a constant macro
#define PI 3.14159

// Conditional compilation based on DEBUG macro
#ifdef DEBUG
void debugFunction() {
    std::cout << "Debug mode is enabled." << std::endl;
}
#else
void debugFunction() {
    std::cout << "Debug mode is disabled." << std::endl;
}
#endif

// Conditional compilation using #ifdef, #elif, and #else
#if defined(TEST)
void testFunction() {
    std::cout << "Test mode is enabled." << std::endl;
}
#elif defined(PRODUCTION)
void testFunction() {
    std::cout << "Test mode is disabled." << std::endl;
}
#else
void testFunction() {
    std::cout << "Default mode." << std::endl;
}
#endif

// Use #pragma once to prevent multiple inclusion
// Code placed here is included only once per translation unit
#pragma once

// Generate an error directive
#ifdef _WIN32
#error This code should not be compiled on Windows
#endif

// Generate a warning directive
#warning This part of the code needs review

// Undefine the DEBUG macro
#undef DEBUG

int main() {
    std::cout << "Value of PI: " << PI << std::endl;

    debugFunction();
    testFunction();

    return 0;
}
