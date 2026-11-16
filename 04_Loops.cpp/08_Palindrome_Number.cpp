//2. While Loop Programs
#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    if (num < 0) {
        cout << "Not a Palindrome";
    }
    else {
        while (num > 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        if (original == reverse) {
            cout << "Palindrome Number";
        }
        else {
            cout << "Not a Palindrome";
        }
    }

    return 0;
}
