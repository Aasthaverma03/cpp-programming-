#include <iostream>
using namespace std;

struct Student
{
    int roll;
    float marks;
};

union Data
{
    int roll;
    float marks;
};

int main()
{
    Student s;
    Data d;

    s.roll = 101;
    s.marks = 90.5;

    d.roll = 101;

    cout << "Structure:" << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    cout << "\nUnion:" << endl;
    cout << "Roll: " << d.roll;

    return 0;
}

/*Structure
Each member has separate storage.
All members can hold values simultaneously.
Size is based on members and padding.


Union
Members share the same storage.
Only one member's value is active at a time.
Size is based on the largest member and alignment.
*/