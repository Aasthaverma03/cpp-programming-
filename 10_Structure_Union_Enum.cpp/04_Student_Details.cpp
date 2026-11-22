#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s = {1, "Priya", 90};

    cout << "Student Details" << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks;

    return 0;
}