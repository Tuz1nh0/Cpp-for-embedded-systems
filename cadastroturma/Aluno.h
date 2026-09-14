#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

#define TURMA 20

using namespace std;

class Aluno {
  private:
    string nome;
    string curso;
    int matricula;
    float nota1;
    float nota2;
  public:
    void setNome(string newNome);
    void setCurso(string newCurso);
    void setMatricula(int newMatrucula);
    void setNotas(float newnNota1, float newNota2);
    string getNome();
    string getCurso();
    int getMatricula();
    float getNota1();
    float getNota2();
    float calculaMedia();
};

Aluno cadastro[TURMA];

#endif