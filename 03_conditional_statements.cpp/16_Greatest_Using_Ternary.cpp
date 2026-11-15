//Conditional (Ternary) Operator
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int greatest = (a > b) ? a : b;

    cout << "Greatest Number = " << greatest;

    return 0;
}
