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

  if(m == 2) {
    if(isLeapYear(y)) {
      if(d < 29) {
        d++;
      }
      else {
        d = 1;
        m++;
      }
    }
    else {
      if(d < 28) {
        d++;
      }
      else {
        d = 1;
        m++;
      }
    }
  }
  else if(m < 8 && m%2 == 0) {
    if(d < 30) {
      d++;
    }
    else {
      d = 1;
      m++;
    }
  }
  else if(m > 8 && m%2 != 0) {
    if(d < 31) {
      d++;
    }
    else {
      d = 1;
      m++;
    }
  }
  else if(m > 7 && m%2 == 0) {
    if(d < 31) {
      d++;
    }
    else {
      d = 1;
      m++;
      if(m > 12) {
        y++;
      }
    }
  }
  else {
    if (d < 30) {
      d++;
    }
    else {
      d = 1;
      m++;
    }
  }
}