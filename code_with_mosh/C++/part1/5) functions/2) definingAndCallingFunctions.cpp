#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName) {
    // Concatenating (combining)
    return firstName + " " + lastName;
}

int main() {
    // Calling - invoking - executing
    greet(fullName("Exit", "Protocol"));

    cout << "Done";
    return 0;
}