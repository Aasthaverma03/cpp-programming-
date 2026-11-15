//Nested if Statement
#include <iostream>
using namespace std;

int main() {
    int age;
    float marks;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    if (age >= 18) {
        if (marks >= 60) {
            cout << "Eligible for the job";
        }
        else {
            cout << "Marks requirement not satisfied";
        }
    }
    else {
        cout << "Age requirement not satisfied";
    }

    return 0;
}
