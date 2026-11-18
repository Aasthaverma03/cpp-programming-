#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    cout << "Copied array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}