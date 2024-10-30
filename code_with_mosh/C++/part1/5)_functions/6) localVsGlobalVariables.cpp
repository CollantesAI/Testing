#include <iostream>

using namespace std;

// Global variable (global scope)
// Avoid globals as it's better to define local variables
// OR declare as a constant variable
const double taxRate = .2;

double calculateTax(int sales) {
    return sales * taxRate;
}

int main() {
    // Local variable (local scope)
    int sales = 10000;
    double tax = calculateTax(sales);
    cout << tax;

    return 0;
}