#include <iostream>
#include "PCInterface.h"

using namespace std;

PCInterface::PCInterface(ClockCalendar& cc) : UserInterface(cc){
}

void PCInterface::display() {
    int d, m, y, h, min, sec, pm;

    clkcal.readDate(d, m, y);
    clkcal.readTime(h, min, sec, pm);

    cout << "Data: " << d << "/" << m << "/" << y << endl;
    if(pm) {
        cout << "Hora: " << h << ":" << min << ":" << sec << " PM" << endl;
    }
    else {
        cout << "Hora: " << h << ":" << min << ":" << sec << " AM" << endl;
    }
}