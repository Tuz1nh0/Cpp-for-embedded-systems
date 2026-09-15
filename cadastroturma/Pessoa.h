#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  private:
    string nome;
    int d, m, y;
  public:
    void setNome(string newNome);
    void setDataNascimento(int bd, int bm, int by);
    string getNome();
    int getDataNascimento(int& bd, int& bm, int& by);
};

Pessoa pessoa;

#endif