#include <iostream>
#include <string>
struct Record
{
int id;
std::string name;
};

int main()
{
      Record *record_list = new Record[2];
       
    for(int i = 0; i < 2; i++)
        {
            std::cout << "please enter record[" << i << "\n";
            std::cin >> record_list[i].id;
            std::cin >> record_list[i].name;
        }
    for(int i =0; i<2; i++)
    {
        std::cout << "record[" << i << "1= " << record_list[i].id << std::endl;
        std::cout << "record[" << i << "]= " << record_list[i].name <<std::endl;
    }
    delete [] record_list ;

    return 0;
}