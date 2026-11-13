
#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;

    cout << "Enter principal: ";
    cin >> p;

    cout << "Enter rate: ";
    cin >> r;

    cout << "Enter time: ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si;

    return 0;
}
