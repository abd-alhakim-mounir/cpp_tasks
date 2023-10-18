#include <iostream>  

void dynamic()
{
    int *p = new int[5]; //arrays 
    if(p != nullptr)
    {
        for(int i=0; i <5; i++)
        {
            p[i] = +10;

            std::cout << "p[" << i << "] = " << p[i] << std::endl;
        }
        }

        
    delete []p;
}

int main()
{
    double *ptr = new double (80.0);
    if(ptr != nullptr)
    {
        *ptr = 20;
    }
    
    delete ptr;
    dynamic ();
    
    return 0;
}