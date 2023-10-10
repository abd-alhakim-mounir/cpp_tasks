/*program to create a class called Person that has private member variables for name, age and country.
 Implement member functions to set and get the values of these variables.*/



#include <iostream>


class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    // Constructor to initialize the object with default values
    Person() {
        name = "";
        age = 0;
        country = "";
    }


    // Member function to set the name
    void setName(const std::string &newName)
    {
        name = newName;
    }

    // Member function to get the name
    std::string getName() const
    {
        return name;
    }


    // Member function to set the age
    void setAge(int newAge) {
        age = newAge;
    }

    // Member function to get the age
    int getAge() const 
    {
        return age;
    }


    // Member function to set the country
    void setCountry(const std::string &newCountry) 
    {
        country = newCountry;
    }

    // Member function to get the country
    std::string getCountry() const 
    {
        return country;
    }

    

    
    
};

int main() {
    // Create a Person object
    Person person;

    // Set values using member functions
    person.setName("hakeem");
    person.setAge(30);
    person.setCountry("Free Palestine");

    // Get and display the values using member functions
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}
