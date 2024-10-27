#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius << " degrees Celsius";

    return 0;
}