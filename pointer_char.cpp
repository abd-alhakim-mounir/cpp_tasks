#include <iostream> // pointer aricthmatic

int main()
{
    char * str = "good morning";
    
    std::cout << "size of char ptr " << sizeof(char*)<< std::endl;
    std::cout << "size of int ptr " << sizeof(int*)<< std::endl;
    std::cout << "size of douple ptr " << sizeof(double*)<< std::endl;
   
   
   for( int i = 0; i < 13; i++)
   {
        std::cout << *(str + i) << std::endl;
    
   }
   
    
    return 0;
}