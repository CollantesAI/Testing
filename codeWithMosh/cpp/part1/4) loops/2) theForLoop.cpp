/* for (declare loop or counter variable; 
        when loop will terminate;
        how variable changes after each repitition)*/

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        // only print odd numbers
        if (i % 2 != 0)
            cout << i << endl;
    }

    return 0;
}