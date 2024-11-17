#include <iostream>

using namespace std;

// parameters without default values must come before those with default value/
double calculateTax(double income, double taxRate = .2) {
    return income * taxRate;
}

int main() {
    double defaultTaxRate = calculateTax(10000);
    double taxRateOverride = calculateTax(10000, .3);
    cout << defaultTaxRate << endl
         << taxRateOverride;


}