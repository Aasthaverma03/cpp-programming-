//2. While Loop Programs
#include <iostream>
using namespace std;

int main() {
    int num, original, temp, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;
    temp = num;

    if (num < 0) {
        cout << "Not an Armstrong Number";
        return 0;
    }

    if (temp == 0) {
        digits = 1;
    }

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 1; i <= digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}
