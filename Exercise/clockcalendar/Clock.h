#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>

class Clock {
  protected:
    int h, min, sec, is_pm;
  public:
    Clock(int hour, int minute, int second, int PM);
    void setTime(int hour, int minute, int second, int PM);
    void readTime(int& hour, int& minute, int& second, int& PM);
    virtual void advance();
};

#endif
