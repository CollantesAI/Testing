/* Declare a secret number. Continuously ask
   the user to guess the secret number. */

#include <iostream>

using namespace std;

int main() {
    int secret = 7;
    int guess = 0;
    while (guess != secret) {
        cout << "Guess: ";
        cin >> guess;
    }

    return 0;
}