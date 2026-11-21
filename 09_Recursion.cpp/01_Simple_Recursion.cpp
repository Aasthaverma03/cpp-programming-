
#include <iostream>
using namespace std;

void display(int n)
{
    if(n == 0)
        return;

    cout << "Hello C++" << endl;

    display(n - 1);
}

int main()
{
    display(3);

    return 0;
}
