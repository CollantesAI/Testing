#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch = 'a';
    cout << ch << endl
         << +ch << endl << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hi " << name;

    return 0;
}