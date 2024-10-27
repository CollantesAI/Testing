// arrays are used to store a collection
// of elements, like a collection of numbers,
// dates, strings, and so on.

#include <iostream>

using namespace std;

int main() {
    int numbersOne[5]; // size - 1 ; cannot recall [5]
    // array size = [0-4] = 5 numbers
    numbersOne[0] = 5;
    numbersOne[1] = 10;
    numbersOne[2] = 23;
    numbersOne[3] = 49;
    numbersOne[4] = 695;
    cout << numbersOne[4] << endl;
    
    int numbersTwo[5] = {10, 20};
    cout << numbersTwo[0];

    return 0;
}