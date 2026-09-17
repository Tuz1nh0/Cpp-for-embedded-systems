#include <iostream>
#include "FPGAInterface.h"

using namespace std;

FPGAInterface::FPGAInterface(){
    oledInit();
}

void FPGAInterface::display(string clkcal) {
    char linha1[32];
    
    snprintf(linha1, sizeof(linha1), "%s", clkcal.c_str());
    
    oledClear();
    setLine(0);
    printString(linha1);
}