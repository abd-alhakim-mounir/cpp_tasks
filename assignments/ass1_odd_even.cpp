#include <iostream>

int main() {
    const int arraySize = 101; // The array size is 101 to hold numbers from 0 to 100
    int numbers[arraySize];   // Declare an array to store the numbers

    // Fill the array with numbers from 0 to 100 using a loop
    for (int i = 0; i <= 100; ++i) {
        numbers[i] = i;
    }

    // Check whether each number in the array is even or odd and print the result
    for (int i = 0; i <= 100; ++i) {
        if (numbers[i] % 2 == 0) {
            std::cout << numbers[i] << " is even." << std::endl;
        } else {
            std::cout << numbers[i] << " is odd." << std::endl;
        }
    }

    return 0;
}
