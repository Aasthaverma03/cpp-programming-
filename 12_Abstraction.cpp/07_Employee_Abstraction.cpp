
#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    void displaySalary()
    {
        cout << "Employee Salary = " << salary;
    }
};

int main()
{
    Employee obj;

    obj.setSalary(25000);
    obj.displaySalary();

    return 0;
}
/*
How abstraction works:
1. We create a class named Employee.
2. We declare salary as private.
3. We create a public function setSalary() to assign salary.
4. We create another public function displaySalary() to display it.
5. In main(), we call these functions using the object.
6. The salary is managed inside the class.
*/