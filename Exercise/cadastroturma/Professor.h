#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include "Pessoa.h"

#define CORPO_DOCENTE 10

using namespace std;

class Professor : public Pessoa {
  private:
    int matricula;
  public:
    void setMatricula(int newMatricula);
    int getMatricula();
};

Professor prof[CORPO_DOCENTE];

#endif