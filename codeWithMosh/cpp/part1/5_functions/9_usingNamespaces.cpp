#include <iostream>
// #include "8_utils\greet.cpp"    // This works
#include "8_utils\greet.hpp"

// using namespace std; if confilicts arise, use below
using std::cout, std::cin;
// using std::cin;
using messaging::greet;

int main()
{
    messaging::greet("Exit");
    greet("Exit");
    greet("Exit");
    greet("Exit");
    greet("Exit");

    return 0;
}

//              TO CREATE INITIAL .EXE
// 1) PS C:\Users\migue\OneDrive\Documents\GitHub\Testing\codeWithMosh\cpp\part1\5_functions
// 2) MAKE SURE ONLY APPLICABLE FILES ARE OPEN IN EDITOR
// 3) g++ -o [main].exe [main].cpp 8_utils\[util].cpp
//              WARNING : DO NOT RUN VIA C++ IDE ; DOING SO WILL REMOVE .EXE FILE
// 4) ./[main].exe