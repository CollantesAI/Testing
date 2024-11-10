#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4};
    // sizeof(numbers): each integer = 4 bytes => 16 bytes
    // sizeif(int): 4 bytes
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        cout << numbers[i] << endl;
    }

    // does the same thing as above
    for (int number: numbers) {
        cout << number << endl;
    }

    string name = "Code with Mosh";
    for (char ch: name) {
        cout << ch << endl;
    }
    
    return 0;
}