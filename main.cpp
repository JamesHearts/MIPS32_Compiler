#include "assembler.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }
    openFile(argv[1]);
    cout << "file open and parsed..." << endl;
    compareTokens();
    cout << "Tokens Compared..." << endl;
    printSymbols();
    cout << "Symbols Printed..." << endl;
    printFile();
    cout << "Assembled file created..." << endl;
    return 0;
}