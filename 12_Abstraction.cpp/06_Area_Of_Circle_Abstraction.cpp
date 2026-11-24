
#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculateArea()
    {
        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;

    obj.input();
    obj.calculateArea();

    return 0;
}
/*
How abstraction works:
1. We create a class named Circle.
2. The radius is declared private.
3. The input() function accepts the radius from the user.
4. The calculateArea() function calculates the area using the formula.
5. The user only calls these two functions.
6. The calculation is performed internally.
*/