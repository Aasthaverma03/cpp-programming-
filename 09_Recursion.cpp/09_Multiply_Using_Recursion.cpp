
#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    if(b == 0)
        return 0;

    if(b < 0)
        return -multiply(a, -b);

    return a + multiply(a, b - 1);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Product = " << multiply(a, b);

    return 0;
}
