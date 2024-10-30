// logical operators:
// && = AND operator
// || = OR operator
// ! = NOT operator

#include <iostream>

using namespace std;

int main() {
    int ageOne = 20;
    bool isEligibleOne = ageOne > 18 && ageOne < 65;
    cout << boolalpha << isEligibleOne << noboolalpha << endl << endl;

    int ageTwo = 10;
    bool isEligibleTwo = ageTwo > 18 || ageTwo < 65;
    cout << boolalpha << isEligibleTwo << noboolalpha << endl << endl;

    int ageThree = 25;
    int salary = 50000;
    bool isEligibleThree = (ageThree > 18 && ageThree < 65) || (salary > 30000);
    cout << boolalpha
         << isEligibleThree << endl
         << !isEligibleThree << noboolalpha << endl << endl;

    return 0;
}