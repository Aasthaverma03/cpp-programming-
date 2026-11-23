// Encapsulation
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void setData(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area: " << length * breadth;
    }
};

int main()
{
    Rectangle r;

    r.setData(10, 5);
    r.area();

    return 0;
}
