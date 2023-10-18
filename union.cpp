#include <iostream>

union Fruit
{
    char taste;
    int price;
    char fruit_name[33]; // 4n n is 1,2,3,4,5,6,7....etc
};

int main()
{
    std::cout <<"size of union" << sizeof(Fruit) <<"\n";

    Fruit orange;
    orange.taste = 1;
    orange.price = 35;
    std::cout << "price is " << orange.price << "\n";

    return 0;
}
