/*
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. 
Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). 
You can refer to stringstream for this.

Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, 
consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.
*/      

#include <iostream>
#include <string>
#include <sstream>

class Student {
private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

public:
    // Setter functions
    void set_age(int a) {
        age = a;
    }

    void set_first_name(const std::string& first) {
        first_name = first;
    }

    void set_last_name(const std::string& last) {
        last_name = last;
    }

    void set_standard(int s) {
        standard = s;
    }

    // Getter functions
    int get_age() const {
        return age;
    }

    std::string get_first_name() const {
        return first_name;
    }

    std::string get_last_name() const {
        return last_name;
    }

    int get_standard() const {
        return standard;
    }

    // Method to format student details as a string
    std::string to_string() const {
        std::stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    Student student;

    // Read input
    int age, standard;
    std::string first_name, last_name;

    std::cin >> age;
    std::cin >> first_name;
    std::cin >> last_name;
    std::cin >> standard;

    // Set student's details using setter functions
    student.set_age(age);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    student.set_standard(standard);

    // Output the formatted string
    std::cout << student.to_string();

    return 0;
}
