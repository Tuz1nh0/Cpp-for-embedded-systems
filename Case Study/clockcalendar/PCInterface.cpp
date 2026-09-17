#include <iostream>
#include "PCInterface.h"

using namespace std;

PCInterface::PCInterface(){
}

void PCInterface::display(string clkcal) {
    cout << "\r" << clkcal << flush;
}