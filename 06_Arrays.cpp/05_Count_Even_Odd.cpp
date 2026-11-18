#include <iostream>
using namespace std;

int main()
{
    int arr[5], even = 0, odd = 0;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd;

    return 0;
}