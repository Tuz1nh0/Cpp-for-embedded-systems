#include <iostream>
#include "FPGAInterface.h"
#include "OLED.h"

using namespace std;

FPGAInterface::FPGAInterface(){
    oledInit();
}

void FPGAInterface::display(string clkcal) {
    char linha1[32];
    char linha2[32];
    
    snprintf(linha1, sizeof(linha1), "%s", clkcal.c_str());
    snprintf(linha2, sizeof(linha2), "%s", clkcal.c_str());
    
    oledClear();
    setLine(0);
    printString(linha1);
    setLine(1);
    printString(linha2);
}