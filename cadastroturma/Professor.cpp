#include <iostream>
#include <string>
#include "Professor.h"

using namespace std;

void Professor::setNome(string newNome) {
  nome = newNome;
}

void Professor::setMatricula(int newMatricula) {
  matricula = newMatricula;
}

string Professor::getNome() {
  return nome;
}

int Professor::getMatricula() {
  return matricula;
}