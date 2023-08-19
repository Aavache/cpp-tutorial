#include <iostream>

int main(){
    // Declare and initialize variables
    int a = 10, b = 3;

    // Boolean comparison
    bool areEqual = (a == b);
    bool areNotEqual = (a != b);
    bool greaterThan = (a > b);
    bool lessThan = (a < b);
    bool greaterThanOrEqual = (a >= b);
    bool lessThanOrEqual = (a <= b);

    // Boolean operations
    bool andOperation = (areEqual && lessThan);
    bool orOperation = (greaterThan || lessThan);
    bool notOperation = (!areEqual);
    bool xorOperation = (greaterThan ^ lessThan);
    bool shortCircuitAndOperation = (areEqual && (a == 10));
    bool shortCircuitOrOperation = (areEqual || (a == 10));

    return 0;
}