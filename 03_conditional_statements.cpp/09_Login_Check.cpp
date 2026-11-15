//Nested if Statement
#include <iostream>
using namespace std;

int main() {
    int username, password;

    cout << "Enter username number: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == 123) {
        if (password == 456) {
            cout << "Login Successful";
        }
        else {
            cout << "Incorrect Password";
        }
    }
    else {
        cout << "Incorrect Username";
    }

    return 0;
}
