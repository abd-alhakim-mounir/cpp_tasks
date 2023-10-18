#include <iostream>

class Employee
{

    public:
    int id;
    int salary;
    std::string name;
    bool hire_status;

    void Hire()
    {
        hire_status = true;
    }

    void Fire()
    {
        hire_status = false;
    }
    
    void display()
    {
        std::cout << "id: " << id
                << "\nname: " << name
                <<"\nsalary: " << salary
                << "\nHired: " << hire_status << "\n";
    }
    
};

int main()
{
    Employee *emp1 = new Employee();
    emp1->id = 1;
    emp1->name = "hakeem";
    emp1->salary = 25000;
    emp1->Hire();
    emp1->display();
    return 0;
}

