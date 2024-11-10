#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    // add f at end, otherwise will try to store
    // as double potentially causing data loss
    float intrestRate = 3.67f;
    // add L at end, otherwise will try to store
    // as integer.
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    // auto will infer type of variable
    auto wasValid = true;
    auto alpha = 'b';
    auto fileDistro = 80500;

    // brace initialization
    int number {2};
    cout << number;

    return 0;
}