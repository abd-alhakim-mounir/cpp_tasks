#include <iostream>


int main()
{
    std::cout << "please enter one of these types : \n "<<
    "1)char\n"<<
    "2)short\n"<<
    "3)int\n";
   
    int type;
    std::cin >> type;

    if(type == 1)
    {
        std::cout << "sizeof(char): " << sizeof(char) << std::endl;
    }
    else if(type == 2)
    {
        std::cout << "sizeof(short): " << sizeof(short) << std::endl;
    }
    else if(type == 3)
    {
        std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    }
    else
    {
        std::cout << "please enter a supported type\n";
    }
    return 0;
}