
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
        cin >> *(ptr + i);

    cout << "Reverse Array: ";

    for(int i = 4; i >= 0; i--)
        cout << *(ptr + i) << " ";

    return 0;
}
