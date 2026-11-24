
#include <iostream>
using namespace std;

class Bank
{
private:
    int balance = 5000;

public:
    void showBalance()
    {
        cout << "Account Balance = " << balance;
    }
};

int main()
{
    Bank obj;

    obj.showBalance();

    return 0;
}
/*
How abstraction works:
1. We create a class named Bank.
2. We declare balance as a private data member.
3. Private data cannot be accessed directly outside the class.
4. We create a public function called showBalance().
5. The user calls this function to see the balance.
6. The function accesses the private balance internally and displays it.
*/
