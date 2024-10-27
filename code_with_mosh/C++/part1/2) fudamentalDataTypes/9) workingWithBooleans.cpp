// for boolean, false =  ; true = 

#include <iostream>

using namespace std;

int main() {
    bool isNewUser = false;
    cout << "Directly printing variable = " << isNewUser << endl
         << "While printing with boolalpha = " << boolalpha << isNewUser << endl
         << "noboolalpha changes back to = " << noboolalpha << isNewUser;
    
    return 0;
}