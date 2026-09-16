#ifndef LOGINLOGOUT_H
#define LOGINLOGOUT_H

#include <iostream>
#include "CadastroProfessores.h"

class LoginLogout : protected CadastroProfessores{
    private:
        bool isLogged;
        int loggedIndex;
    public:
        bool verifyLogged();
        int getLoggedIndex();
        bool login(int matricula);
        void logout();
};

LoginLogout auth;

#endif