#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>

#define CORPO_DOCENTE 10

using namespace std;

class Professor {
  private:
    string nome;
    int matricula;
  public:
    void setNome(string newNome);
    void setMatricula(int newMatricula);
    string getNome();
    int getMatricula();
};

Professor prof[CORPO_DOCENTE];

#endif