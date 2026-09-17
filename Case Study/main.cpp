#include <iostream>
#include <stdint.h>
#include "clockcalendar/ClockCalendar.h"
//#include "clockcalendar/FPGAInterface.h"
#include "clockcalendar/PCInterface.h"

using namespace std;

int main() {
    ClockCalendar cc(0, 0, 0, 0, 0, 0, 0);
    PCInterface pc;
    //FPGAInterface oled;

    int opt = 0;
    if (!(cin >> opt)) {
        cerr << "Invalid option. Please enter 1 or 2." << endl;
        return 1;
    }
    cin.ignore();

    while (true) {
        cc.advance();
        if (opt == 1) {
            pc.display(cc.readDateSTR() + " " + cc.readTimeSTR());
        } else if (opt == 2) {
            break;
            //oled.display(cc.readDateSTR());
            //oled.display(cc.readTimeSTR());
        }
    }

    return 0;
}