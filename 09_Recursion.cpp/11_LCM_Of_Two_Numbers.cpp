
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a == 0 || b == 0)
        cout << "LCM = 0";
    else
        cout << "LCM = " << (a / gcd(a, b)) * b;

    return 0;
}
