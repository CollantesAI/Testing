// Write a program to calculate the area of a crilce.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "Area is: " << area;

    return 0;
}