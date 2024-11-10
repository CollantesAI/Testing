#include <iostream>

using namespace std;

int main() {
    // US Citizen
    //   CA Resident: tuition = 0
    //   Non resident: tuition = 1000
    // Not a US Citizen
    //   tuition = 3000

    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;

    // outer if statement
    if (isCitizen) {
        // inner if statement
        if (!caResident) {
            tuition = 1000;
        }
    }
    else {
        tuition = 3000;
    }

    return 0;
}