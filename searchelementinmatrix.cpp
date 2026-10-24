#include <iostream>
using namespace std;

int main()
{
    int a[2][2], key, found = 0;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(a[i][j] == key)
                found = 1;
        }
    }

    if(found == 1)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}