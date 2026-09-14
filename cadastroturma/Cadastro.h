#ifndef CADASTRO_H
#define CADASTRO_H

#include <iostream>
#include "Aluno.h"

class Cadastro {
  private:
    int qtdAlunos = 0;
  public:
    bool verificaMatricula(Aluno cadastro[], int qtd, int matricula); 
    void cadastrarAluno();
    void consultarAluno();
    void listarAlunos();
    void excluirAluno();
    void alterarAluno();
};

Cadastro cagr;

#endif