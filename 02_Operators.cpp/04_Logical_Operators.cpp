
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "AND = " << (a < 15 && b > 15) << endl;
    cout << "OR = " << (a > 15 || b > 15) << endl;
    cout << "NOT = " << !(a < 15) << endl;

    return 0;
}
