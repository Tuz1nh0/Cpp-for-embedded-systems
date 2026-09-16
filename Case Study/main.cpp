#include <iostream>
#include <string>
#include "clockcalendar/ClockCalendar.h"

using namespace std;

int main() {
    int opt;

    while(true) {
        cout << "\n===== DATA E HORA =====\n";
        cout << "1 - Set date\n";
        cout << "2 - Set time\n";
        cout << "3 - Read date\n";
        cout << "4 - Read time\n";
        cout << "5 - Advance\n";
        cout << "0 - Exit\n";

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
    }

    return 0;
}