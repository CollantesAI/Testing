#include <iostream>
// this allows us to find numeric limits
#include <limits>

using namespace std;

int main() {
    cout << "short = " << sizeof(short) << " bytes" << endl
         << "int = " << sizeof(int) << " bytes" << endl
         << "long = " <<  sizeof(long) << " bytes" << endl
         << "long long = " <<  sizeof(long long) << " bytes" << endl << endl;

    cout << "short range = " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl
         << "int range = " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl
         << "long range = " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl
         << "long long range = " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;

    return 0;
}