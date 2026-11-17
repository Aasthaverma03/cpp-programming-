
#include <iostream>
using namespace std;

float interest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;

    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;

    cout << "Simple Interest = " << interest(p, r, t);

    return 0;
}
