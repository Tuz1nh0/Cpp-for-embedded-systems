#include <iostream>
#include "FPGAInterface.h"

using namespace std;

FPGAInterface::FPGAInterface(ClockCalendar& cc) : UserInterface(cc){
}

void FPGAInterface::display() {
    int d, m, y, h, min, sec, pm;
    
    clkcal.readDate(d, m, y);
    clkcal.readTime(h, min, sec, pm);

    //TBD
}