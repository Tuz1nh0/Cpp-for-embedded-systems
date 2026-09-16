#ifndef FPGAINTERFACE_H
#define FPGAINTERFACE_H

#include "UserInterface.h"

class FPGAInterface : public UserInterface {
    private:
        //TBD
    public:
        FPGAInterface(ClockCalendar& cc);
        void display() override;
};

#endif