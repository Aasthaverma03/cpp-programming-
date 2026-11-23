// Encapsulation
#include <iostream>
using namespace std;

class Account
{
private:
    int balance = 5000;

public:
    void showBalance()
    {
        cout << "Balance: " << balance;
    }
};

int main()
{
    Account a;

    a.showBalance();

    return 0;
}
