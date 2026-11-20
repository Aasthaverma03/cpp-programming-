
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "Value = " << *ptr;

    delete ptr;

    return 0;
}
