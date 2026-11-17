
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;

    swapNumbers(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}
