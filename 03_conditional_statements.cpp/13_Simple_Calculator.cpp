//Switch Case 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Division = " << (float)a / b;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}
