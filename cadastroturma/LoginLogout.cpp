#include <iostream>
#include <string>
#include "LoginLogout.h"

using namespace std;

bool LoginLogout::verifyLogged() {
    return isLogged;
}

int LoginLogout::getLoggedIndex() {
    return loggedIndex;
}

bool LoginLogout::login(int matricula) {
    for(int i = 0; i < qtdProfessores; i++) {
        if(prof[i].getMatricula() == matricula) {
            isLogged = true;
            loggedIndex = i;
            return true;
        }
    }

    return false;
}

void LoginLogout::logout() {
    isLogged = false;
    loggedIndex = -1;
}