#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;
    float average;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / 5.0;

    cout << "Average = " << average;

    return 0;
}