
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
            vowels++;

        else if(isalpha(ch))
            consonants++;

        else if(isdigit(ch))
            digits++;

        else if(ch == ' ')
            spaces++;
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces;

    return 0;
}
