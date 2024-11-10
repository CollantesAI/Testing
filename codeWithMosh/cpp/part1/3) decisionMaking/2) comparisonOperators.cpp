// comparison operators:
// < , >, <=, >=, ==, !=

#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 5;
    bool firstResult = x != y;
    cout << firstResult << " or " << boolalpha << firstResult << endl;

    char first = 'a';
    char second = 'A';
    bool secondResult = first == second;
    cout << noboolalpha << secondResult << " or " << boolalpha << secondResult;

    return 0;
}