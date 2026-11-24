
#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        cout << "Sum = " << a + b;
    }
};

int main()
{
    Calculator obj;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    obj.add(a, b);

    return 0;
}
/*
How abstraction works:
1. We create a class named Calculator.
2. We define a function add() that accepts two numbers.
3. The user enters two numbers in the main() function.
4. We pass those numbers to add().
5. The function performs the addition internally.
6. The user receives the result without needing to write the addition logic themselves.
*/