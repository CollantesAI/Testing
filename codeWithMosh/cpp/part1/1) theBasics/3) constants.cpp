#include <iostream>

int main() {
    /* const make a value unable to be changed */
    const double pi = 3.14;
    pi = 0; /* this does not work due to const */
    return 0;
}