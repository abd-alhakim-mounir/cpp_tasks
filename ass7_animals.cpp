/*Write a probram with a mother class animal.
 Inside it define a name and an age variables, and set_value() function.
 Then create two bases variables Zebra 
 and Dolphin which write a message telling the age, 
 the name and giving some extra information (e.g. place of origin)*/

 #include <iostream>


class Animal {
protected:
    
public:

    std::string name;
    int age;

    // Constructor to initialize name and age
    Animal(const std::string &n, int a) : name(n), age(a) {}

    // Function to set name and age
    void set_value(const std::string &n, int a) {
        name = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    // Constructor for Zebra
    Zebra(const std::string &n, int a) : Animal(n, a) {}

    // Display information including place of origin for Zebra
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Place of origin: Africa" << std::endl;
    }
};

class Dolphin : public Animal {
public:
    // Constructor for Dolphin
    Dolphin(const std::string &n, int a) : Animal(n, a) {}

    // Display information including place of origin for Dolphin
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Place of origin: Oceans" << std::endl;
    }
};

int main() {
    // Create a Zebra and a Dolphin
    Zebra zebra("zebra", 5);
    Dolphin dolphin("dolphin", 10);

    // Display information about the Zebra and Dolphin
    std::cout << "Zebra Information:" << std::endl;
    zebra.displayInfo();

    std::cout << "\nDolphin Information:" << std::endl;
    dolphin.displayInfo();

    return 0;
}
