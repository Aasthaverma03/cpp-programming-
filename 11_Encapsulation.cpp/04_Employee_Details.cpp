// Encapsulation
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout<<"--------Employee details---------";
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
