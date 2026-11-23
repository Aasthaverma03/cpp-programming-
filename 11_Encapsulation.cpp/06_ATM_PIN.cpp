// Encapsulation
#include <iostream>
using namespace std;

class ATM
{
private:
    int pin = 1234;

public:
    void checkPin(int p)
    {
        if(p == pin)
            cout << "Correct PIN";
        else
            cout << "Incorrect PIN";
    }
};

int main()
{
    ATM a;
    int p;

    cout << "Enter PIN: ";
    cin >> p;

    a.checkPin(p);

    return 0;
}
