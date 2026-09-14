#include <iostream>
#include "clockcalendar/ClockCalendar.h"

using namespace std;

int main() {
  int opt = -1;

  ClockCalendar cc(1, 1, 0, 0, 0, 0, 0);

  while(opt != 0) {
    cout << "\n1 - Set date\n";
    cout << "2 - Set time\n";
    cout << "3 - Read date\n" << endl;
    cout << "4 - Read time\n" << endl;
    cout << "5 - Advance\n" << endl;
    cout << "0 - Exit\n" << endl;
    cout << "Choose an option: ";
    cin >> opt;
    cin.ignore();

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
        cc.advance();
        break;
      case 0:
        cout << "Exiting program\n";
        break;
      default:
        cout << "Invalid option\n";
    }
  }
}