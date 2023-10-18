#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // You need to read the value of 'n' from the input.

    // Check if 'n' is within the range of 1 to 9 and print the corresponding word.
    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
                break;
        }
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}
