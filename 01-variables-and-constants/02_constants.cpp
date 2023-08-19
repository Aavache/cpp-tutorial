#include <iostream>

int main() {
    const int myInt = 15;  // myInt will always be 15
    // This will not compile:
    // error: assignment of read-only variable 'myInt'
    myInt = 10;  

    return 0;
}
