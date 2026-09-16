#ifndef LOGINLOGOUT_H
#define LOGINLOGOUT_H

#include <iostream>
#include "CadastroProfessores.h"

class LoginLogout{
    private:
        bool isLogged;
        int loggedIndex;
        CadastroProfessores& cadastro;
    public:
        LoginLogout(CadastroProfessores& cadastroProfessores); 
        bool verifyLogged();
        int getLoggedIndex();
        bool login(int matricula);
        void logout();
};

#endif