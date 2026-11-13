
#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, total, percentage;

    cout << "Enter marks of five subjects: ";
    cin >> a >> b >> c >> d >> e;

    total = a + b + c + d + e;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%";

    return 0;
}
