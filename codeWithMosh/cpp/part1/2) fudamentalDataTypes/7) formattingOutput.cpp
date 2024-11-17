#include <iostream>
// IO manipulator
#include <iomanip>

using namespace std;

int main() {
    // formatting data into columns
    // setw = setWidth; (n) = # ofChar;
    // auto right aligned;
    // << left = left aligned
    cout << left 
         << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot";

    return 0;
}