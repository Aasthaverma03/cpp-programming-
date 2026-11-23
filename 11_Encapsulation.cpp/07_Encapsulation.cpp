// Encapsulation
#include<iostream>
using namespace std;

class Student
{
private:
    int roll;

public:
    void input()
    {
         cout << "Enter Roll Number: ";
         cin >> roll;
    }

    void display()
    {
        cout << "Roll Number: " << roll;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
