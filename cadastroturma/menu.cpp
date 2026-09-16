#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

int Menu::readOpt() {
  int opt;
  cin >> opt;
  cin.ignore();
  return opt;
}

void Menu::showCadastroTurma(bool profLogged, bool verifyProf) {
  cout << "\n===== MENU =====\n";
  cout << "1 - Login\n";
  cout << "2 - Logout\n";
  cout << "3 - Cadastrar aluno\n";
  cout << "4 - Consultar aluno \n";
  cout << "5 - Listar alunos\n";
  cout << "6 - Excluir aluno\n";
  cout << "7 - Alterar aluno\n";
  cout << "8 - Cadastrar profesor\n";
  cout << "9 - Consultar professor\n";
  cout << "10 - Listar professores\n";
  cout << "11 - Excluir professor\n";
  cout << "12 - Alterar professor\n";
}

void Menu::showClockCalendar() {
  cout << "\n===== DATA E HORA =====\n";
  cout << "1 - Set date\n";
  cout << "2 - Set time\n";
  cout << "3 - Read date\n";
  cout << "4 - Read time\n";
  cout << "5 - Advance\n";
  cout << "0 - Exit\n";
}
