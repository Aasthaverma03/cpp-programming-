#include <iostream>
using namespace std;

enum class Month
{
    January = 1,
    February,
    March
};

int main()
{
    Month m = Month::February;

    cout << "Month number: "
         << static_cast<int>(m);

    return 0;
}