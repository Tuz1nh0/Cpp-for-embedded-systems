#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;

void Aluno::setNome(string newNome) {
  nome = newNome;
}

void Aluno::setCurso(string newCurso) {
  curso = newCurso;
}

void Aluno::setMatricula(int newMatricula) {
  matricula = newMatricula;
}

void Aluno::setNotas(float newNota1, float newNota2) {
  nota1 = newNota1;
  nota2 = newNota2;
}

string Aluno::getNome() {
  return nome;
}

string Aluno::getCurso() {
  return curso;
}

int Aluno::getMatricula() {
  return matricula;
}

float Aluno::getNota1() {
  return nota1;
}

float Aluno::getNota2() {
  return nota2;
}

float Aluno::calculaMedia() {
  return (nota1 + nota2) / 2;
}