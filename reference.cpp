#include <iostream>

void swap(int &frist , int &second)
{
    int temp = frist;
    frist = second;
    second = temp;
}

int main()
{
    int x =5;
    int y = 70;
    int *p =&x;

    int &r =x;
    r = 15;

    swap(x,y);

    std::cout << "x: " << x << "y: " << y << "\n";
    return 0;
}