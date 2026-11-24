
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void display() = 0;
};

class Rectangle : public Shape
{
public:
    void display()
    {
        cout << "This is a Rectangle";
    }
};

class Circle : public Shape
{
public:
    void display()
    {
        cout << "This is a Circle";
    }
};

int main()
{
    Rectangle r;
    Circle c;

    r.display();
    cout << endl;
    c.display();

    return 0;
}
/*
How abstraction works:
1. We create an abstract parent class named Shape.
2. It contains a pure virtual function called display().
3. We create two derived classes: Rectangle and Circle.
4. Both classes implement the display() function differently.
5. The Rectangle object displays rectangle information.
6. The Circle object displays circle information.
*/
