#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu {
    public:
        int readOpt();
        void showCadastroTurma(bool profLogged, bool verifyProf);
        void showClockCalendar();
};

Menu menu;

#endif