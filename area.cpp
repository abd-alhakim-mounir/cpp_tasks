#include <iostream>

int main()
{
    float radius = 0.0;
    const float PI = 3.14;
    std::cout << "please Enter the radius\n";
    std::cin >> radius;

    float Area = radius * radius * PI;
    
    std::cout << "Area of circle = " << Area << std::endl;
    
    return 0;


}