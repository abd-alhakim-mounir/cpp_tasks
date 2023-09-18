#include <iostream>

int main() 
{
    int first_number, second_number, sum;

    // Input the two integers
    std::cout << "Enter the first integer: ";
    std::cin >> first_number;

    std::cout << "Enter the second integer: ";
    std::cin >> second_number;

    // Add the two integers
    sum = first_number + second_number;

    // Display the sum
    std::cout << "Sum of " << first_number << " and " << second_number << " is: " << sum << std::endl;

    return 0;
}
