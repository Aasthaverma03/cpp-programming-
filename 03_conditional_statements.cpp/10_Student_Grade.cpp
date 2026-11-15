//else-if Ladder
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade A";
    }
    else if (marks >= 80 && marks < 90) {
        cout << "Grade B";
    }
    else if (marks >= 70 && marks < 80) {
        cout << "Grade C";
    }
    else if (marks >= 40 && marks < 70) {
        cout << "Grade D";
    }
    else if (marks >= 0 && marks < 40) {
        cout << "Fail";
    }
    else {
        cout << "Invalid Marks";
    }

    return 0;
}
