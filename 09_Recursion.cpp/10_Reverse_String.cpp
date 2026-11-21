
#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int i)
{
    if(i < 0)
        return;

    cout << str[i];

    reverse(str, i - 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    reverse(str, str.length() - 1);

    return 0;
}
