//else-if Ladder
#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units";
    }
    else if (units <= 100) {
        bill = units * 2;
        cout << "Electricity Bill = " << bill;
    }
    else if (units <= 200) {
        bill = 100 * 2 + (units - 100) * 3;
        cout << "Electricity Bill = " << bill;
    }
    else {
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;
        cout << "Electricity Bill = " << bill;
    }

    return 0;
}
