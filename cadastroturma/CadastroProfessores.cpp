#include <iostream>
#include <string>
#include "Professor.h"
#include "CadastroProfessores.h"

using namespace std;

bool CadastroProfessores::verificaMatricula(Professor prof[], int qtd, int matricula) {
  for(int i = 0; i < qtd; i++) {
    if(prof[i].getMatricula() == matricula) {
      return true;
    }
  }

  return false;
}

void CadastroProfessores::cadastrarProfessor() {
  if(qtdProfessores >= CORPO_DOCENTE) {
    cout << "None\n";
    return;
  }

  string nome;
  int matricula;

  cout << "Digite o nome do(a) professor(a): ";
  getline(cin, nome);

  cout << "Digite a matrícula: ";
  cin >> matricula;

  if(verificaMatricula(prof, qtdProfessores, matricula)) {
    cout << "Matricula ja cadastrada!\n";
    cin.ignore();
    return;
  }

  prof[qtdProfessores].setNome(nome);
  prof[qtdProfessores].setMatricula(matricula);

  cout << "Professor(a) cadastrado!\n";
  
  qtdProfessores++;

  cin.ignore();
}

void CadastroProfessores::consultarProfessor() {
  bool found = false;
  
  string nome;

  cout << "Digite o nome do(a) professor(a) a ser consultado: ";
  getline(cin, nome);
  for(int i = 0; i < qtdProfessores; i++){
    if(prof[i].getNome() == nome) {
      cout << "Matrícula: " << prof[i].getMatricula() << endl;

      found = true;
      break;
    }

    if(!found) {
      cout << "Nome inválido!\n";
    }
  }
}
void CadastroProfessores::listarProfessor() {
  for (int i = 0; i < qtdProfessores; i++) {
    cout << "---------------------" << endl;
    cout << "Professor(a): " << prof[i].getNome() << endl;
    cout << "Matrícula: " << prof[i].getMatricula() << endl;
    cout << "\n";
  }
}

void CadastroProfessores::excluirProfessor() {
  bool person = false; 

  int index;

  string nome;

  cout << "Digite o nome do(a) professor(a) a ser excluído";
  getline(cin, nome);

  for(int i = 0; i < qtdProfessores; i++) {
    if(prof[i].getNome() == nome) {
      index = i;
      break;
    }
  }

  if(index == -1) {
    cout << "Professor não encontrado!\n";
    return;
  }

  for (int i = index; i < (qtdProfessores-1); i++) {
    prof[i] = prof[i+1];
  }

  qtdProfessores--;

  cout << "Professor excluído com sucesso!\n";
}

void CadastroProfessores::alterarProfessor() {
  bool person = false; 

  int index;
  int opcao_param = -1;

  string nome;

  cout << "Digite o nome do(a) professor(a) a ser consultado: ";
  getline(cin, nome);
  
  for(int i = 0; i < qtdProfessores; i++) {
    if(prof[i].getNome() == nome) {
      index = i;
      person = true;
      break;
    }
  }

  if(!person) {
    cout << "Nome invalido!\n";
    return;
  }
      
  while(opcao_param != 0) {
    cout << "Digite o parâmetro a ser alterado: \n";
    cout << "1 - Alterar nome\n";
    cout << "0 - Sair\n";
    
    cin >> opcao_param;
    cin.ignore();

    switch(opcao_param) {
      case 1:
        cout << "Digite o nome a ser alterado: \n";
        getline(cin, nome);
        prof[index].setNome(nome);
        cout << "Nome alterado\n";
        break;
      case 0:
        break;
      default:
        cout << "Opção invalida!\n";
        break;
    }  
  }
}