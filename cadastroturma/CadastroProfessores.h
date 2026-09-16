#ifndef CADASTRO_PROFESSORES_H
#define CADASTRO_PROFESSORES_H

#include <iostream>
#include "Professor.h"

class CadastroProfessores {
  protected:
    int qtdProfessores = 0;
  /*
  private:
    int qtdProfessores = 0;
    bool isLogged;
    int loggedIndex;
  */
  public:
    bool verificaMatricula(Professor prof[], int qtd, int matricula);
    void cadastrarProfessor();
    void consultarProfessor();
    void listarProfessor();
    void excluirProfessor();
    void alterarProfessor();
    /*
    bool verifyLogged();
    int getLoggedIndex();
    bool login(int matricula);
    void logout();*/
};

CadastroProfessores cadastroprofessores;

#endif