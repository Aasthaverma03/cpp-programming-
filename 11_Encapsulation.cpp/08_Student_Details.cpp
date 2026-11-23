
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int marks;

public:
    void setData(int r, string n, int m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};

int main()
{
    Student s;

    s.setData(101, "Rahul", 90);
    s.display();

    return 0;
}
