/* Write code to swap the value of wo cariables. */
#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;

    /* begin solution */

    int temp = a;
    a = b;
    b = temp;

    /* temp is necessary to conserve
    value of 'a' while being assigned
    value of 'b'. 'a' can be recalled
    by making 'b' = temp. */

    cout << a;
    cout << b;

    return 0;
}