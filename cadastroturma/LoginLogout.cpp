#include <iostream>
#include <string>
#include "LoginLogout.h"

using namespace std;

LoginLogout::LoginLogout(CadastroProfessores& cadastroProfessores) : cadastro(cadastroProfessores) {
    isLogged = false;
    loggedIndex = -1;
}

bool LoginLogout::verifyLogged() {
    return isLogged;
}

int LoginLogout::getLoggedIndex() {
    return loggedIndex;
}

bool LoginLogout::login(int matricula) {
    if(isLogged) {
        cout << "Já existe um usuário logado. Faça logout antes de logar novamente." << endl;
        return false;
    }

    if(cadastro.getQtdProfessores() == 0) {
        cout << "Nenhum professor cadastrado. Registre antes de logar." << endl;
        return false;
    }

    if(cadastro.isProfessor(matricula)) {
        isLogged = true;
        loggedIndex = matricula;

        cout << "Login realizado com sucesso!" << endl;
        return true;
    }

    cout << "Professor não encontrada." << endl;
    return false;
}

void LoginLogout::logout() {
    if(!isLogged) {
        cout << "Nenhum professor logado." << endl;
        return;
    }

    isLogged = false;
    loggedIndex = -1;

    cout << "Logout realizado com sucesso!" << endl;
}