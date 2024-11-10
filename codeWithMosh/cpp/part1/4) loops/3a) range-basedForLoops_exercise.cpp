/* Given a list of temperatures, write code
   to calculate the average temperature. */

#include <iostream>

using namespace std;

int main() {
    int temperatures[] = {60, 80, 90};
    double sum = 0;
    for (int temperature: temperatures)
        // sum = sum + temperature;
        sum += temperature;
    short n = sizeof(temperatures) / sizeof(int);
    double average = sum / n;
    cout << average;

    return 0;
   }