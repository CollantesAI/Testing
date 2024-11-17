#include <iostream>
#include "greet.hpp"

using namespace std;

namespace messaging
{
    // Function definition
    void greet(string name)
    {
        cout << "Hello " << name;
    }
}