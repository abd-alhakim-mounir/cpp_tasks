#include <iostream>

int main()
{
    double balance[5] = {100, 1000, 300, 700, 200};

    double *d_ptr = balance;
    

    for(int i=0; i <5; i++)
    {
        std::cout << *(balance + i) << std::endl;
        std::cout << d_ptr[i] << std::endl;

    }
    
    std::cout << balance+0 << std::endl;
    std::cout << balance+1 << std::endl;

    return 0;
}