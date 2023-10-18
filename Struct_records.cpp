#include <iostream>
#include <string>

struct record
{
    int id;
    std::string name;
};

int main()
{
    record record1;
    record1.id = 1;
    record1.name = "mohamed";

    std::cout << "record 1 name: " << record1.name<< "  " << "record 1 id: " << record1.id<<std::endl;

    return 0;
}
