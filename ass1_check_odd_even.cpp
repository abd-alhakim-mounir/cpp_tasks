
/*#include <iostream>

int main();
{
    int num;
    std::cout <<"please enter a number: /n";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Even number" ; std::endl;
    }
    else{
        std::cout <<"Odd number" ; std::endl; 
    }
    return 0;
    
} */
#include <iostream>

int main() {
    int num;
    std::cout << "Please enter a number: \n";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Even number\n";
    } else {
        std::cout << "Odd number\n";
    }
    return 0;
}
