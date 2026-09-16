#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>
#include "Pessoa.h"

#define TURMA 20

using namespace std;

class Aluno : public Pessoa {
  private:
    string curso;
    int matricula;
    float nota1;
    float nota2;
  public:
    void setCurso(string newCurso);
    void setMatricula(int newMatricula);
    void setNotas(float newnNota1, float newNota2);
    string getCurso();
    int getMatricula();
    float getNota1();
    float getNota2();
    float calculaMedia();
};

Aluno aluno[TURMA];

#endif