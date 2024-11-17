// write a program for printing this table:
//  
//  Course         Students  
//  C++                        100
//  JavaScript                  50

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left
         << setw(15) << "Course" << setw(15) << "Students" << endl
         << setw(15) << "C++" << setw(15) << right << 100 << left << endl
         << setw(15) << "JavaScript" << setw(15) << right << 50;

    return 0;
}