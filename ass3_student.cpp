/*
i need a c++ code to create student struct that has : 
id 
age
name
gра
take all parameters from user input,
then outputs to the console do that for 3 students
*/
#include <iostream>
#include <string>


struct Student  // Define the student struct
{    
    int id;
    int age;
    std::string name;
    double gpa;
};

int main() {
    
    Student students[3]; // Create an array of three students

    
    for (int i = 0; i < 3; i++) // Input information for each student
    {
        std::cout << "Enter information for student " << i + 1 << ":\n";
        
        std::cout << "ID: ";
        std::cin >> students[i].id;

        std::cout << "Age: ";
        std::cin >> students[i].age;
        
        std::cout << "Name: ";
        std::cin.ignore(); // Ignore the newline character left in the buffer
        std::getline(std::cin, students[i].name);

        std::cout << "GPA: ";
        std::cin >> students[i].gpa;
    }

    
    std::cout << "\nStudent Information:\n"; // Output information for each student
    for (int i = 0; i < 3; i++) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "ID: " << students[i].id << "\n";
        std::cout << "Age: " << students[i].age << "\n";
        std::cout << "Name: " << students[i].name << "\n";
        std::cout << "GPA: " << students[i].gpa << "\n\n";
    }

    return 0;
}
