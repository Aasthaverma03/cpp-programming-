
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks";
    }
};

int main()
{
    Dog obj;

    obj.sound();

    return 0;
}
/*
How abstraction works:
1. We create an abstract class called Animal.
2. We declare a pure virtual function sound() = 0.
3. The Animal class does not explain how an animal makes a sound.
4. The Dog class inherits the Animal class.
5. The Dog class implements the sound() function.
6. When we call obj.sound(), the dog-specific implementation executes.
*/