
#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    void display()
    {
        cout << "Age: " << age;
    }
};

int main()
{
    Student s;

    s.setAge(20);
    s.display();

    return 0;
}
