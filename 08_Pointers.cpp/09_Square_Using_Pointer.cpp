
#include <iostream>
using namespace std;

int main()
{
    int num;
    int *ptr = &num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square = " << (*ptr) * (*ptr);

    return 0;
}
