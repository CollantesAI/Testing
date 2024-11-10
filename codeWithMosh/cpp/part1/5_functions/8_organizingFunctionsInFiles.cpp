// WARNING DO NOT RUN THIS FILE VIA VSC IDE
#include <iostream>
// #include "8_utils\math1.cpp"    // this line works
#include "8_utils\math1.hpp"    // this line works; follow steps below


using namespace std;



int main()
{
    cout << add(2, 5) << endl
         << sub(2, 5);
    
    return 0;
}

//              TO CREATE INITIAL .EXE
// 1) PS C:\Users\migue\OneDrive\Documents\GitHub\Testing\codeWithMosh\cpp\part1\5_functions
// 2) g++ -o 8_organizingFunctionsInFiles.exe 8_organizingFunctionsInFiles.cpp 8_utils\math1.cpp
//              WARNING : DO NOT RUN VIA C++ IDE ; DOING SO WILL REMOVE .EXE FILE
// 3) ./8_organizingFunctionsInFiles.exe