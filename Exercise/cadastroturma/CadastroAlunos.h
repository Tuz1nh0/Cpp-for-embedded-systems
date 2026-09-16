#ifndef CADASTRO_ALUNOS_H
#define CADASTRO_ALUNOS_H

#include <iostream>
#include "Aluno.h"

class CadastroAlunos {
  private:
    int qtdAlunos = 0;
  public:
    bool verificaMatricula(Aluno aluno[], int qtd, int matricula);
    void cadastrarAluno();
    void consultarAluno();
    void listarAlunos();
    void excluirAluno();
    void alterarAluno();
};

CadastroAlunos cadastroalunos;

#endif