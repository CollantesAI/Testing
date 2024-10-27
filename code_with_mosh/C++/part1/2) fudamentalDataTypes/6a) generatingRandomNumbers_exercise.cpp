// write a program for rolling dice
// output two random values 1-6
// use formula below to limit range:
// (rand() % (maxValue - minValue + 1)) + minValue

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // defining constants to avoid randMagNum
    const short maxValue = 6; //short saves recources
    const short minValue = 1;

    // random number seed generator
    srand(time(nullptr));
    
    // this will give randNum between 1-6
    // first ; second represents die
    short first = (rand() % (maxValue - minValue +1)) + minValue;
    short second = (rand() % (maxValue - minValue +1)) + minValue;
    short total = first + second;

    cout << "First Die: " << first << endl
         << "Second Die: " << second << endl
         << "Total: " << total;

    return 0;
}