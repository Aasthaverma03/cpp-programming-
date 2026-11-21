
#include <iostream>
using namespace std;

int countDigits(int n)
{
    if(n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n < 0)
        n = -n;

    if(n == 0)
        cout << "Digits = 1";
    else
        cout << "Digits = " << countDigits(n);

    return 0;
}
