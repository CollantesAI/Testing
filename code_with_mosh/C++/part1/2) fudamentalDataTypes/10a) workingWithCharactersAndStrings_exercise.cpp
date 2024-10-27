// write a program that asks the user a series of
// questions like street, city, state, and zip code
// and then prints the user's adress using this format:
//
// Street
// City, State, ZipCode

#include <iostream>
#include <string>

using namespace std;

int main() {
    string street;
    cout << "Please enter your street address: ";
    getline(cin, street);
    cout << "Your street address is: " << street << endl << endl;

    string city;   
    cout << "Please enter your City: ";
    getline(cin, city);
    cout << "Your City is : " << city << endl << endl;
    
    string state;
    cout << "Please enter your State: ";
    getline(cin, state);
    cout << "Your State is: " << state << endl << endl;
    
    string zipCode;
    cout << "Please enter your Zipcode: ";
    getline(cin, zipCode);
    cout << "Your Zipcode is: " << zipCode << endl << endl;

    cout << "Your full address is: " << endl
         << street << endl
         << city << ", " << state << ", " << zipCode;

    return 0;
}