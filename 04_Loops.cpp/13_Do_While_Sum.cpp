//3. Do-While Loop Programs
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 1) {
        cout << "Enter a positive number";
    }
    else {
        do {
            sum += i;
            i++;
        } while (i <= n);

        cout << "Sum = " << sum;
    }

    return 0;
}
