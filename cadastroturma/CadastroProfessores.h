#ifndef CADASTRO_PROFESSORES_H
#define CADASTRO_PROFESSORES_H

#include <iostream>
#include "Professor.h"

class CadastroProfessores {
  private:
    int qtdProfessores = 0;
  public:
    bool verificaMatricula(Professor prof[], int qtd, int matricula);
    void cadastrarProfessor();
    void consultarProfessor();
    void listarProfessor();
    void excluirProfessor();
    void alterarProfessor();
};

CadastroProfessores cadastroprofessores;

#endif