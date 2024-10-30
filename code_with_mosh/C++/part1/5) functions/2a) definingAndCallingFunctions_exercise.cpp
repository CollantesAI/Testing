/* Create a function that receives two integers
   and returns the maximum of the two. */

#include <iostream>

using namespace std;

int max(int first, int second) {
    return (first > second) ? first : second;
}

int main() {
    int larger = max(10, 5);
    cout << larger;

    return 0;
}