#include <iostream>
#include <array>

class shape
{
    public:
    virtual void show() = 0;  //pure virtual

};

class circle : public shape
{
    public:
    void show() override
    {
        std::cout << "show circle\n";

    }
};

class triangle : public shape
{
    public:
    void show() override
    {
        std::cout << "show triangle\n";

    }
};

void makePicture(std::array<shape*,2> list)
{
    for(auto shape : list)
    {
        shape->show();
    }
}

int main()
{
    circle c1;
    triangle t1;
    shape *sptr = &c1;
    sptr ->show(); //circle
    std::array<shape*,2> shapes;
    shapes[0] = sptr;
    shapes[1] = &t1;

    makePicture(shapes);


    return 0;
}