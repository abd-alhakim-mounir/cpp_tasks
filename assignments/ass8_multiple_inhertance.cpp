/*
c++ code for using multiple inheritance class vehicle has two methods :
Vehicle On , Off
Control has One Method SetTransmission (bool automatic)
*if true then its auto transmission
*if false then its manual transmission
*/



#include <iostream>

class Vehicle {
public:
    void On() {
        std::cout << "Vehicle is now ON." << std::endl;
    }

    void Off() {
        std::cout << "Vehicle is now OFF." << std::endl;
    }
};

class Control {
public:
    void SetTransmission(bool automatic) {
        if (automatic) {
            std::cout << "Transmission set to Automatic." << std::endl;
        } else {
            std::cout << "Transmission set to Manual." << std::endl;
        }
    }
};

class Car : public Vehicle, public Control {
public:
    // Additional methods and attributes specific to the Car class can be added here
};

int main() {
    Car car1;
    car1.On();
    car1.SetTransmission(true); // Set to Automatic
    car1.Off();

    /*Car car2;
    car2.On();
    car2.SetTransmission(false); // Set to Manual
    car2.Off();*/

    return 0;
}
