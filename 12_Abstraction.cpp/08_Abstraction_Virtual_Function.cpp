
#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start()
    {
        cout << "Vehicle is Starting";
    }
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car is Starting";
    }
};

int main()
{
    Vehicle *v;
    Car c;

    v = &c;
    v->start();

    return 0;
}
/*
How abstraction works:
1. We create a parent class named Vehicle.
2. We declare a virtual function start().
3. The Car class inherits the Vehicle class.
4. The Car class provides its own implementation of start().
5. We create a pointer of the parent class Vehicle.
6. We store the address of the Car object in that pointer.
7. When v->start() is called, the Car version executes.
*/