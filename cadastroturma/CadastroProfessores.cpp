#include <iostream>
#include <string>
#include "CadastroProfessores.h"

using namespace std;

string nome;
int day, month, year;
int matricula;
/*bool isLogged = false;
int loggedIndex = -1;*/

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
    cout << "None" << endl;
    return;
  }

  cout << "Digite o nome do(a) professor(a): ";
  getline(cin, nome);

  cout << "Digite a data de nascimento do(a) professor(a): ";
  cin >> day >> month >> year;

  cout << "Digite a matrícula: ";
  cin >> matricula;

  if(verificaMatricula(prof, qtdProfessores, matricula)) {
    cout << "Matricula ja cadastrada!" << endl;
    cin.ignore();
    return;
  }

  prof[qtdProfessores].setNome(nome);
  prof[qtdProfessores].setDataNascimento(day, month, year);
  prof[qtdProfessores].setMatricula(matricula);

  cout << "Professor(a) cadastrado!" << endl;
  
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
      cout << "Data de nascimento: " << prof[i].getDataNascimento(day, month, year) << endl;
      cout << "Matrícula: " << prof[i].getMatricula() << endl;

      found = true;
      break;
    }

    if(!found) {
      cout << "Nome inválido!" << endl;
    }
  }
}
void CadastroProfessores::listarProfessor() {
  for (int i = 0; i < qtdProfessores; i++) {
    cout << "---------------------" << endl;
    cout << "Professor(a): " << prof[i].getNome() << endl;
    cout << "Data de nascimento: " << prof[i].getDataNascimento(day, month, year) << endl;
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
    cout << "Professor não encontrado!" << endl;
    return;
  }

  for (int i = index; i < (qtdProfessores-1); i++) {
    prof[i] = prof[i+1];
  }

  qtdProfessores--;

  cout << "Professor excluído com sucesso!" << endl;
}

void CadastroProfessores::alterarProfessor() {
  bool person = false; 

  int index;
  int opcao_param = -1;

  string nome;
  string data;

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
    cout << "Nome invalido!" << endl;
    return;
  }
      
  while(opcao_param != 0) {
    cout << "Digite o parâmetro a ser alterado: " << endl;
    cout << "1 - Alterar nome" << endl;
    cout << "2 - Alterar data de nascimento" << endl;
    cout << "0 - Sair" << endl;
    
    cin >> opcao_param;
    cin.ignore();

    switch(opcao_param) {
      case 1:
        cout << "Digite o nome a ser alterado: " << endl;
        getline(cin, nome);
        prof[index].setNome(nome);
        cout << "Nome alterado" << endl;
        break;
      case 2:
        cout << "Digite a datas de nascimento a ser alterada: ";
        cin >> day >> month >> year;
        prof[index].setDataNascimento(day, month, year);
        cout << "Data de nascimento alterada" << endl;
        break;
      case 0:
        break;
      default:
        cout << "Opção invalida!" << endl;
        break;
    }  
  }
}

/*
bool LoginLogout::verifyLogged() {
    return isLogged;
}

int LoginLogout::getLoggedIndex() {
    return loggedIndex;
}

bool LoginLogout::login(int matricula) {
    for(int i = 0; i < qtdProfessores; i++) {
        if(prof[i].getMatricula() == matricula) {
            isLogged = true;
            loggedIndex = i;
            return true;
        }
    }

    return false;
}

void LoginLogout::logout() {
    isLogged = false;
    loggedIndex = -1;
}
*/