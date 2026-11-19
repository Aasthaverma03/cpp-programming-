
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, result = "";

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(result.find(str[i]) == string::npos)
        {
            result += str[i];
        }
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}
