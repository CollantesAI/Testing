// Sales = $95000
// State Tax = 4%
// County Tax = 2%
// Total Tax = ?


#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
// *line break to show different stories in code*
    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax;

    return 0;
}