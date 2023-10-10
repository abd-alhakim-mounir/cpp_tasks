/*
code for caculate the area and the circle's circumference
*/



#include <iostream>

class Circle {
private:
    double radius;

public:
    const float PI = 3.14159;
    
    Circle(double r) // Constructor to initialize the radius
    {
        radius = r;
    }

    // Member function to calculate the circle's area
    double calculateArea() {
        return PI * radius * radius; // Pi times radius squared
    }

    // Member function to calculate the circle's circumference
    double calculateCircumference() {
        return 2 * PI * radius; // 2 times Pi times radius
    }
};

int main() {
    double radius;
    
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Create a Circle object with the given radius
    Circle circle(radius);

    // Calculate and display the area and circumference
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;
    std::cout << "Circumference of the circle: " << circle.calculateCircumference() << std::endl;

    return 0;
}
