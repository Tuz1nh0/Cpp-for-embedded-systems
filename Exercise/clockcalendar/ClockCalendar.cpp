#include "ClockCalendar.h"

ClockCalendar::ClockCalendar(int d, int m, int y, int h, int min, int sec, int PM) : Clock(h, min, sec, PM), Calendar(d, m, y) {
}

void ClockCalendar::advance() {
  int was_pm = is_pm;
  Clock::advance();
  if(was_pm && !is_pm) {
    Calendar::advance();
  }
}

/*
  switch(opt) {
      case 1:
        int day, month, year;
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
        cc.setDate(day, month, year);
        break;
      case 2:
        int hour, minute, second, PM;
        cout << "Enter time (hh mm ss PM): ";
        cin >> hour >> minute >> second >> PM;
        cc.setTime(hour, minute, second, PM);
        break;
      case 3:
        cc.readDate(day, month, year);
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        break;
      case 4:
        cc.readTime(hour, minute, second, PM);
        cout << "Time: " << hour << ":" << minute << ":" << second << " " << (PM ? "PM" : "AM") << endl;
        break;
      case 5:
        int steps;
        cout << "How many steps? ";
        cin >> steps;
        for(int i = 0; i < steps; i++) {
          cc.advance();
        }
        cc.advance();
        break;
      case 0:
        cout << "Exiting program\n";
        break;
      default:
        cout << "Invalid option\n";
    }
  
  return 0;
}*/