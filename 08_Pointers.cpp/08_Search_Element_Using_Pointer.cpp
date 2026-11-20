
#include <iostream>
using namespace std;

int main()
{
    int arr[5], key;
    int *ptr = arr;
    bool found = false;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
        cin >> *(ptr + i);

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(*(ptr + i) == key)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
