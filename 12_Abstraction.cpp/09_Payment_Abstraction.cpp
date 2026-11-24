
#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay() = 0;
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment Done Using UPI";
    }
};

class Card : public Payment
{
public:
    void pay()
    {
        cout << "Payment Done Using Card";
    }
};

int main()
{
    UPI u;
    Card c;

    u.pay();
    cout << endl;
    c.pay();

    return 0;
}
/*
How abstraction works:
1. We create an abstract class named Payment.
2. It contains a pure virtual function pay().
3. We create two derived classes: UPI and Card.
4. Both classes implement the pay() function differently.
5. The UPI class handles UPI payment.
6. The Card class handles card payment.
7. The user only needs to call pay() on the selected payment object.
*/