/*this code allocates 2 chunks of memory
one to store an integer pointer on stack
other one to store an integer on the heap */

#include <iostream>


int main() 
{
    int *numPtr = new int;

    std::cout << "*numPtr: " << *numPtr << std::endl;  // no value
    std::cout << "numPtr: " << numPtr << std::endl;     
    std::cout << "&numPtr: " << &numPtr << std::endl;
    
    *numPtr = 42;
    std::cout << "*numPtr assigned 42. " << std::endl;


    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
   
   
   return 0;
}