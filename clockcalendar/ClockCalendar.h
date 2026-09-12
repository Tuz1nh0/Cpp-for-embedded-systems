#ifndef CLOCKCALENDAR_H
#define CLOCKCALENDAR_H

#include <iostream>
#include "Clock.h"
#include "Calendar.h"

class ClockCalendar : public Clock, public Calendar {
  public:
    ClockCalendar(int d, int m, int y, int h, int min, int sec, int PM);
    void advance();
};

ClockCalendar cc;

#endif
