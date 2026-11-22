#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    Employee e = {101, "Amit", 30000};

    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary;

    return 0;
}