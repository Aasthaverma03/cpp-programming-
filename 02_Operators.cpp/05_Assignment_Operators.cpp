
#include <iostream>
using namespace std;

int main() {
    int a = 20;

    cout << "Initial value = " << a << endl;

    a += 5;
    cout << "After += 5: " << a << endl;

    a -= 5;
    cout << "After -= 5: " << a << endl;

    a *= 2;
    cout << "After *= 2: " << a << endl;

    a /= 2;
    cout << "After /= 2: " << a << endl;

    a %= 6;
    cout << "After %= 6: " << a << endl;

    return 0;
}
