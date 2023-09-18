/*
input: grade from 0 to 100 for random subject
output litreal grade :
0 < grade 50 : fail 
50 <= grade <= 65 : pass
65 < grade <= 75 : good 
75 < grade <= 85 : very good
85 < grade <= 100 : excellent


*/
#include <iostream>


int main()
{
    unsigned int grade = 0 ;
    std::cout << "please enter your grade\n" ;
    std::cin >> grade;
    if(grade<50)
    {
    std::cout<< "you are failed\n";
    }
    else if(grade >=50 && grade <= 65)
    {
        std::cout << "you passed\n";
    }
    else if(grade >65 && grade <= 75)
    {
        std::cout << "your grade is good\n";
    }
    else if(grade >75 && grade <= 85)
    {
        std::cout << "your grade is very good\n";
    }
    else if(grade >85 && grade <= 100)
    {
        std::cout << "your grade is excellent\n";
    }
    return 0;
}