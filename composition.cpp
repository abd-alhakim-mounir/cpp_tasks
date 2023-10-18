#include <iostream>

class Engine
{
    public:
    Engine() //instractor
    {}
    ~Engine() //distractor
    {

    }

    void start()
    {
        std::cout <<"start\n";
    }
    void stop()
    {
        std::cout <<"stop\n";
    }
    
};


class Vehicle
{
    public:
    Vehicle(Engine engine) : mEngine(engine)
    {
        mEngine.start();
    }
    ~Vehicle()
    {
        mEngine.stop();
    }
    private:
    Engine mEngine;
};

int main()
{
    Engine engine;
    Vehicle car(engine);

    return 0;

}
