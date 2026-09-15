#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  private:
    string nome;
  public:
    void setNome(string newNome);
};

Pessoa pessoa;

#endif