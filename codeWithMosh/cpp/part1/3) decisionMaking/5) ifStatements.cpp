// if
// else if...
// else

#include <iostream>

using namespace std;

int main() {
    int temperature = 70;

    if (temperature <= 60) {
        cout << "Cold" << endl;
        cout << "Recommend wearing warm clothes";
    }

    else if (temperature < 90) {
        cout << "Nice!";
    }

    else {
        cout << "Hot" << endl;
        cout << "Heat advisory in place";
    }
    return 0;
}