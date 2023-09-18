


#include <iostream>


double add (double n1, double n2)
{
    return n1 + n2;
}
double sub (double n1, double n2)
{
    return n1 - n2;
}
double mul (double n1, double n2)
{
    return n1 * n2;
}
double div (double n1, double n2)
{
    return n1 / n2;
}
int main()
{
    char op;
    double first =0;
    double second =0;
    std::cout << "please enter the frist number\n";
    std::cin >> first; 
    std::cout << "please enter the second number\n";
    std::cin >> second; 
    std::cout << "please enter the desired operator (+ - * /)";
    std::cin >> op;
    double result =0;


    if(op == '+')
    {
        result = add(first, second);
    }
    else if(op == '-')
    {
        result = sub(first, second);
    }
    else if(op == '*')
    {
        result = mul(first, second);
    }
    else if(op == '/')
    {
        result = div(first, second);
    }
    std::cout << "result = " << result << std::endl;
    return 0 ;
}