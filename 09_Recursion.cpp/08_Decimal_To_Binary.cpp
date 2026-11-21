
#include <iostream>
using namespace std;

void binary(int n)
{
    if(n == 0)
        return;

    binary(n / 2);

    cout << n % 2;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n == 0)
        cout << "0";
    else if(n < 0)
        cout << "Enter a positive number";
    else
        binary(n);

    return 0;
}
