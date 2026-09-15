#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

void Pessoa::setNome(string newNome) {
    nome = newNome;
}

void Pessoa::setDataNascimento(int bd, int bm, int by) {
    d = bd;
    m = bm;
    y = by;
}

string Pessoa::getNome() {
    return nome;
}

int Pessoa::getDataNascimento(int& bd, int& bm, int& by) {
    bd = d;
    bm = m;
    by = y;
}