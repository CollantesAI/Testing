#include <iostream>

using namespace std;

int main() {
    int sales = 11000;
    // utilizing the conditional opertor
    double commission = (sales > 10000) ? .1 : .05;
    cout << commission;

/* SAME AS THE FOLLOWING:
    if (sales > 10000) {
        commission = .1;
    }
    else {
        commission = .05;
    }
*/
    return 0;
}