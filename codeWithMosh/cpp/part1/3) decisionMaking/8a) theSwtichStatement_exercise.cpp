/* Create a basic calculator. Ask the user for
   two numbers and an operator. Then, print the
   result of applying the operator to those 
   numbers. */

   #include <iostream>

   using namespace std;

   int main() {
    cout << "Enter two numbers: ";
    int first;
    int second;
    cin >> first >> second;

    cout << "Enter an operator: ";
    char op;
    cin >> op;

    switch (op) {
      case '+':
         cout << first + second;
         break;
      case '-':
         cout << first - second;
         break;
      default:
         cout << "Invalid operator!";
    }

    return 0;
   }