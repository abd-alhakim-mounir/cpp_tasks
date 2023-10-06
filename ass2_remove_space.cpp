#include <iostream>
#include <cstring>

int main() {
    char charArray[] = {'R', 'O', 'B', 'O', 'T', 'I', 'C', 'S', ' ', 'C', 'O', 'R', 'N', 'E', 'R'};
    int length = sizeof(charArray) / sizeof(char); // Calculate the length of the array

    // Print the original array
    std::cout << "Original Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << charArray[i];
    }
    std::cout << std::endl;

    // Remove spaces from the array
    int newSize = 0;
    for (int i = 0; i < length; i++) {
        if (charArray[i] != ' ') {
            charArray[newSize] = charArray[i];
            newSize++;
        }
    }

    // Null-terminate the new array
    charArray[newSize] = '\0';

    // Print the modified array without spaces
    std::cout << "Array without Spaces: " << charArray << std::endl;

    return 0;
}
