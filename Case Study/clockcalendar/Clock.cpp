#include "Clock.h"

Clock::Clock(int hour, int minute, int second, int PM) {
  setTime(hour, minute, second, PM);
}

void Clock::setTime(int hour, int minute, int second, int PM) {
  h = hour;
  min = minute;
  sec = second;
  is_pm = PM;
}

void Clock::readTime(int& hour, int& minute, int& second, int& PM) {
  hour = h;
  minute = min;
  second = sec;
  PM = is_pm;
}

void Clock::advance() {
  sec++;

  if(sec >= 60) {
    sec = 0;
    min++;
    if(min >= 60) {
      min = 0;
      h++;
      if(h > 12) {
        h = 1;
      }
      if(h == 12) {
        is_pm = !is_pm;
      }
    }
  }
}
