#ifndef CLOCKCALENDAR_H
#define CLOCKCALENDAR_H

#include <iostream>
#include <string>
#include "Clock.h"
#include "Calendar.h"

using namespace std;

class ClockCalendar : public Clock, public Calendar {
  public:
    ClockCalendar(int d, int m, int y, int h, int min, int sec, int PM);
    string readDateSTR();
    string readTimeSTR();
    void advance() override;
};

#endif
