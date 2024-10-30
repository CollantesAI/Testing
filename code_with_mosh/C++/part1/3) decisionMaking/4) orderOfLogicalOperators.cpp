// logical order of operations
//
// Parenthesis ()
// NOT !
// AND &&
// OR  ||

#include <iostream>

using namespace std;

int main() {
    bool a = true;
    bool b = false;
    bool c = false;
    bool resultOne = b && !a;
    cout << boolalpha << resultOne << noboolalpha << endl << endl;
    
    bool resultTwo = a || b && c;
    cout << boolalpha << resultTwo << noboolalpha << endl << endl;

    return 0;
}