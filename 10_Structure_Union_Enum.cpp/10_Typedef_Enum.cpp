#include <iostream>
using namespace std;

typedef enum
{
    Small,
    Medium,
    Large
} Size;

int main()
{
    Size s = Medium;

    cout << "Size value: " << s;

    return 0;
}