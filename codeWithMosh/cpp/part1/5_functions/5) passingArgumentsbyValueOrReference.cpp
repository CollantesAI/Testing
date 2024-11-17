#include <iostream>

using namespace std;

// & = reference parameter; references existing variable
void increasePrice(double& price) {
    price *= 1.2;
}

void greet(const string& name) {
    cout << "Hello " << name << endl;
}

int main() {
    double price = 100;
    increasePrice(price);
    // reference variable allows recall outside of function group
    cout << price << endl;

    string name = "Exit";
    greet(name);
    cout << name;

    return 0;
}