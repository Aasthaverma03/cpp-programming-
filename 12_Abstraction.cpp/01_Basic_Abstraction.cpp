
#include <iostream>
using namespace std;

class ATM
{
public:
    void withdraw()
    {
        cout << "Money Withdrawn Successfully";
    }
};

int main()
{
    ATM obj;

    obj.withdraw();

    return 0;
}
/*How abstraction works:
1. We create a class named ATM.
2. Inside the class, we define a function named withdraw().
3. The user calls obj.withdraw() without needing to know the internal implementation of the withdrawal operation.
4. The function performs its operation and displays the message.*/
