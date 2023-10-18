#include <iostream>

class shape
{
    public:

    void setWidth(int local_width)
    {
        width = local_width;
    }

    int getWidth()
    {
        return width;
    }

    void setHight(int hight)
    {
        this->hight = hight;
    }

    int getHight()
    {
        return this->hight ;
    }
    int area()
    {
        return width * hight;
    }



    private:
    int width;
    int hight;

};

class Rectangle : public shape
{
    public:
    Rectangle()
    {

    }
    void display()
    {
        std::cout << "width " << getWidth()
        << " hight " << getHight()
        << " area " << area() << "\n";

    }
};


int main()
{
    Rectangle rect;
    rect.setWidth(5);
    rect.setHight(20);
    rect.display();
    return 0;
}