//3. Do-While Loop Programs
#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n0. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Sum = " << a + b;
                break;

            case 2:
                cout << "Difference = " << a - b;
                break;

            case 3:
                cout << "Product = " << a * b;
                break;

            case 4:
                if (b != 0)
                    cout << "Division = " << a / b;
                else
                    cout << "Cannot divide by zero";
                break;

            case 0:
                cout << "Calculator Closed";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 0);

    return 0;
}
