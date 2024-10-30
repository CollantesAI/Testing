#include <iostream>

using namespace std;

int main() {
    cout << "Select an option: " << endl
         << "1- Create account:" << endl
         << "2- Change password:" << endl
         << "3- Quit";

    short input;
    cin >> input;

    switch (input) {
        case 1:
            cout << "You selected 1";
            break; // req'd to prevent executing following statements
        case 2:
            cout << "You selected 2";
            break;
        default:
            cout << "Goodbye!";
            // don't need break statement b/c default is last statement
    }
/*
    if (input == 1) {
        cout << "You selected 1";
    }
    else if (input == 2) {
        cout << "You selected 2";
    }
    else {
        cout << "Goodbye!"
    }
*/    
    return 0;
}