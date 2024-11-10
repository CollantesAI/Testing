#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 3;
    // static_cast converts int to double here
    double z = static_cast<double>(x) / y;

    return 0;
}