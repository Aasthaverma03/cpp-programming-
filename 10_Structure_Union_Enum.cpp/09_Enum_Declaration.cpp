#include <iostream>
using namespace std;

enum Week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main()
{
    Week day = Wednesday;

    cout << "Day value: " << day;

    return 0;
}