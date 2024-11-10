#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // random number generator
    //long elapsedSeconds = time(nullptr); // Jan 1 1970
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number;

    return 0;
}