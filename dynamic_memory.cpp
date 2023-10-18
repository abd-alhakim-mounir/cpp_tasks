#include <iostream>  

void dynamic()
{
    int *p = new int; 
    if(p != nullptr)
    {
        *p = 10;
        std::cout << *p;
    }
    delete p;
}
int main()
{
    int x = 20;
    while(1)
    {
        dynamic();
    }
    return 0;
}