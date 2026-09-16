#ifndef PCINTERFACE_H
#define PCINTERFACE_H

#include "UserInterface.h"

class PCInterface : public UserInterface {
    public:
        PCInterface(ClockCalendar& cc);
        void display() override;
};

#endif