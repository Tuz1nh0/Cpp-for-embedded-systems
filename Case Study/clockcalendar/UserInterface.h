#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "ClockCalendar.h"

class UserInterface {
    protected:
        ClockCalendar& clkcal;
    public:
        UserInterface(ClockCalendar& cc);
        virtual void display();
        virtual ~UserInterface();
};

#endif