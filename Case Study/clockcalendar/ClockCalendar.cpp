#include "ClockCalendar.h"
#include <string>

using namespace std;

ClockCalendar::ClockCalendar(int d, int m, int y, int h, int min, int sec, int PM) : Clock(h, min, sec, PM), Calendar(d, m, y) {
}

string ClockCalendar::readTimeSTR(){
  int h, min, sec, pm;
  this->readTime(h, min, sec, pm);

  char buffer[10];
  snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d %s", h, min, sec, pm ? "PM" : "AM");
  return string(buffer);
}

string ClockCalendar::readDateSTR() {
  int d, m, y;
  this->readDate(d, m, y);

  char buffer[12];
  snprintf(buffer, sizeof(buffer), "%02d/%02d/%04d", d, m, y);
  return string(buffer);
}

void ClockCalendar::advance() {
  int was_pm = is_pm;
  Clock::advance();
  if(was_pm && !is_pm) {
    Calendar::advance();
  }
}