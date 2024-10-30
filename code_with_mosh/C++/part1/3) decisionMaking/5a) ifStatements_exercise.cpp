// Use this chart to set the commission
// based on the sales:
//
// Sales              Commission
// Up to $10000            10%
// $10000 to $15000        15%
// Over $15000             20%

#include <iostream>

using namespace std;

int main() {
    int sales = 16000;
    double commission;
    
    if (sales <= 10000) {
        commission = 0.10;
    }

        else if (sales <= 15000) {
        commission = 0.15;
    }

        else {
        commission = 0.20;
    }

    cout << "Total sales: " << sales << endl
         << "Commission: " << commission;

    return 0;
}