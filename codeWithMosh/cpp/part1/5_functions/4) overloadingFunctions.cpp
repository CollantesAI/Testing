// overloading = overlapping functions

#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello " << name;
}

// signature = name + (number and type of parameters)
// each function should have a unique signature
void greet(string title, string name) {
    cout << "Hello " << title << " " << name;
}

int main() {
    greet("Mr.", "Miguel");

    return 0;
}