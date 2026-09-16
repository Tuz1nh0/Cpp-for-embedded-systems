#include <iostream>
#include <string>
#include "Professor.h"

using namespace std;

void Professor::setMatricula(int newMatricula) {
  matricula = newMatricula;
}
int Professor::getMatricula() {
  return matricula;
}