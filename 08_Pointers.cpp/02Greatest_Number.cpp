
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p = &a;
    int *q = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(*p > *q)
        cout << "Greatest = " << *p;
    else
        cout << "Greatest = " << *q;

    return 0;
}
