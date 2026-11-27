
#include <iostream>
using namespace std;

int main()
{
    int a[2][2];
    int determinant;

    cout << "Enter elements of 2x2 matrix:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    determinant = (a[0][0] * a[1][1]) -
                  (a[0][1] * a[1][0]);

    cout << "Determinant = " << determinant;

    return 0;
}
