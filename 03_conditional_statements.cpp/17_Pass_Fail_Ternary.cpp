//Conditional (Ternary) Operator
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    string result = (marks >= 40) ? "Pass" : "Fail";

    cout << "Result = " << result;

    return 0;
}
