//3. Do-While Loop Programs
#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a non-zero number: ";
        cin >> num;
    } while (num == 0);

    if (num > 0) {
        cout << "Positive Number";
    }
    else {
        cout << "Negative Number";
    }

    return 0;
}
