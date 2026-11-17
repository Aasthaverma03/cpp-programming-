
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
        cout << "Factorial not defined";
    else if(n > 12)
        cout << "Number too large";
    else
        cout << "Factorial = " << factorial(n);

    return 0;
}
