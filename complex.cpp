#include <iostream>


class complex
{
    public:
    complex(float r, float i) :real(r), img(i)
    {

    }
    complex operator+(complex const obj)
    {
        complex result(0.0, 0.0);
        
        result.real = real + obj.real;
        result.img = img + obj.real;
        return result;

    }
    void display()
    {
        std::cout<< real << " +i " << img << "\n";
    }

    private:
    float real;
    float img;

};


int main()
{
    complex c1(10.5, 20.5);
    complex c2(15.5, 30.5);

    complex c3 = c1 + c2;
    c3.display();
    return 0;
}