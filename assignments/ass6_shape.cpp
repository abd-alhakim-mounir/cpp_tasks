/*
Write a program that defines a shape class with 
a constructor that gives value to width and height.
 The define two sub-classes triangle and rectangle, 
 that calculate the area of the shape area (). 
In the main, define two variables a triangle and a rectangle and then call the area() 
function in this two varibles.
*/



#include <iostream>

// Define the Shape class with width and height
class Shape {
protected:
    double width;
    double height;

public:
    // Constructor to set width and height
    Shape(double w, double h) : width(w), height(h) {}

    // Function to calculate the area
    double area() {
        return 0.0; // Default implementation returns 0.0
    }
};

// Define the Triangle class as a subclass of Shape
class Triangle : public Shape {
public:
    // Constructor for Triangle
    Triangle(double w, double h) : Shape(w, h) {}

    // Calculate the area of the Triangle
    double area() {
        return 0.5 * width * height; // Area of a triangle formula
    }
};

// Define the Rectangle class as a subclass of Shape
class Rectangle : public Shape {
public:
    // Constructor for Rectangle
    Rectangle(double w, double h) : Shape(w, h) {}

    // Calculate the area of the Rectangle
    double area() {
        return width * height; // Area of a rectangle formula
    }
};

int main() {
    // Create instances of Triangle and Rectangle
    Triangle triangle(20, 3);
    Rectangle rectangle(10, 6);

    // Calculate and display the area of each shape
    std::cout << "Area of the Triangle: " << triangle.area() << std::endl;
    std::cout << "Area of the Rectangle: " << rectangle.area() << std::endl;

    return 0;
}
