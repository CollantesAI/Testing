// code this requirement:
// "A job applicant should be a US citizen and
// either have a Bachelor degree or a least two
// years of work experience."

#include <iostream>

using namespace std;

int main() {
    bool isCitizen = false;
    bool hasBachelorDegree = true;
    short yearsOfExperience = 10;
    bool isEligible = (isCitizen) && (hasBachelorDegree || yearsOfExperience >= 2);

    cout << boolalpha << isEligible << noboolalpha << endl << endl;

    return 0;
}