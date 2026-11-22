#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    Student s;

    s.roll = 101;
    s.name = "Rahul";

    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name;

    return 0;
}