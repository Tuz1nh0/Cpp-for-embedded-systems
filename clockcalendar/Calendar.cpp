#include "Calendar.h"

Calendar::Calendar(int day, int month, int year) {
  setDate(day, month, year);
}

void Calendar::setDate(int day, int month, int year) {
  d = day;
  m = month;
  y = year;
}

void Calendar::readDate(int& day, int& month, int& year) {
  day = d;
  month = m;
  year = y;
}

static bool isLeapYear(int year) {
  bool leap = false;
  if((year%4 == 0 && year%100 != 0) || year%400 == 0) {
    leap = true;
  }
  return leap;
}

void Calendar::advance() {
  int lastday;

  if(m == 2) {
    if(isLeapYear(y)) {
      lastday = 29;
    } else {
      lastday = 28;
    }
  }
  else if(m == 4 || m == 6 || m == 9 || m == 11) {
    lastday = 30;
  }
  else {
    lastday = 31;
  }
  
  if(d < lastday) {
    d++;
  }
  else {
    d = 1;
    m++;
    if(m > 12) {
      m = 1;
      y++;
    }
  }
}