#include <iostream>

int main() {
    int dividend, divisor;
    int quotient, remainder;

    // Input dividend and divisor
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display quotient and remainder
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}