#include <iostream>
using namespace std;

int main()
{
    int a[2][2], b[2][2], sub[2][2];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> b[i][j];

    cout << "Subtraction of two matrices:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}