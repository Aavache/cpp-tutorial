#include <iostream>


int main(){
    // Declare and initialize variables
    int a = 10;

    // NOTE: the following operations will gain importance when we start using loops

    // Increment, this adds 1 to the variable
    a++;

    // Decrement, this subtracts 1 from the variable
    a--;

    // Increment by 2, this adds 2 to the variable
    a += 2;

    // Decrement by 2, this subtracts 2 from the variable
    a -= 2;

    // Increment by 1, this adds 1 to the variable
    a = a + 1;

    // Decrement by 1, this subtracts 1 from the variable
    a = a - 1;

    // Product by 2, this multiplies the variable by 2 
    a *= 2;

    // Quotient by 2, this divides the variable by 2
    a /= 2;

    // Remainder by 2, this returns the remainder of the division by 2
    a %= 2;


    // Difference between pre-increment and post-increment
    a = 5;
    int b = a++;  // b gets the value 5, then a becomes 6

    a = 5;
    int b = ++a;  // a becomes 6, then b gets 6

    return 0
}