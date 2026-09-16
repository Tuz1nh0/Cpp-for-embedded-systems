#ifndef CALENDAR_H
#define CALENDAR_H

#include <iostream>

class Calendar {
  protected:
    int d, m, y;
  public:
    Calendar(int day, int month, int year);
    void setDate(int day, int month, int year);
    void readDate(int& day, int& month, int& year);
    virtual void advance();
};

#endif
