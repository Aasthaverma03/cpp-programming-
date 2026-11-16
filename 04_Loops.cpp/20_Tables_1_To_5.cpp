//4. Nested Loop Programs
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "\nTable of " << i << endl;

        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j
                 << " = " << i * j << endl;
        }
    }

    return 0;
}
