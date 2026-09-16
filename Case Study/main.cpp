#include <iostream>
#include <thread>
#include <chrono>
#include "clockcalendar/PCInterface.h"
#include "clockcalendar/FPGAInterface.h"

using namespace std;

int main() {
    ClockCalendar cc(0, 0, 0, 0, 0, 0, 0);

    UserInterface* ui = nullptr;

    #ifdef PCINTERFACE_H
        PCInterface pc(cc);
        ui = &pc;
    #else
        FPGAInterface fpga(cc);
        ui = &fpga;
    #endif

    while(true) {
        ui->display();
        cc.advance();
        //this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}