
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle";
    }
};

int main()
{
    Circle obj;

    obj.area();

    return 0;
}
/*
How abstraction works:
1. We create an abstract class named Shape.
2. Inside it, we declare a pure virtual function area().
3. We do not provide the implementation of area() in the Shape class.
4. The Circle class inherits the Shape class.
5. The Circle class provides its own implementation of area().
6. We create an object of Circle and call the function.
*/