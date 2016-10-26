#include "assembler.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    openFile();
    cout << "file open and parsed..." << endl;
    compareTokens();
    cout << "Tokens Compared..." << endl;
    printSymbols();
    cout << "Symbols Printed..." << endl;
    printFile();
    cout << "Assembled file created..." << endl;
    return 0;
}