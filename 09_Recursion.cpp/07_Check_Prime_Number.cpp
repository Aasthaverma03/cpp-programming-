
#include <iostream>
using namespace std;

bool isPrime(int n, int i)
{
    if(n <= 1)
        return false;

    if(i > n / i)
        return true;

    if(n % i == 0)
        return false;

    return isPrime(n, i + 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n, 2))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}
