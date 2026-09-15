#include <iostream>
#include <string>
#include "cadastroturma/Aluno.h"
#include "cadastroturma/Cadastro.h"
#include "clockcalendar/ClockCalendar.h"

using namespace std;

int main() {
  int opt = -1;

  ClockCalendar cc(1, 1, 0, 0, 0, 0, 0);

  while (opt != 0) {
    cout << "\n===== MENU =====\n";
    cout << "1 - Login\n";
    cout << "2 - Cadastrar aluno\n";
    cout << "3 - Consultar aluno \n";
    cout << "4 - Listar alunos\n";
    cout << "5 - Excluir aluno\n";
    cout << "6 - Alterar aluno\n";
    cout << "7 - Cadastrar profesor\n";
    cout << "8 - Consultar professor\n";
    cout << "9 - Listar professores\n";
    cout << "10 - Excluir professor\n";
    cout << "11 - Alterar professor\n";
    cout << "0 - Logout\n";

    cin >> opt;
    cin.ignore();
    switch(opt) {
      case 1:
        //IMPLEMENTAR LOGIN COM NOME E MATRÍCULA
        break;
      case 2:
        cadastro.cadastrarAluno();
        break;
      case 3:
        cadastro.consultarAluno();
        break;
      case 4:
        cadastro.listarAlunos();
        break;
      case 5:
        cadastro.excluirAluno();
        break;
      case 6:
        cadastro.alterarAluno();
        break;
      case 7:
        cadastro.cadastrarProfessor();
        break;
      case 8:
        cadastro.consultarProfessor();
        break;
      case 9:
        cadastro.listarProfessor();
        break;
      case 10:
        cadastro.excluirProfessor();
        break;
      case 11:
        cadastro.alterarProfessor();
        break;
      case 0:
        cout << "Encerrando o programa\n";
        break;
      default:
        break;
    }
  }

  while(opt != 0) {
    cout << "\n1 - Set date\n";
    cout << "2 - Set time\n";
    cout << "3 - Read date\n";
    cout << "4 - Read time\n";
    cout << "5 - Advance\n";
    cout << "0 - Exit\n";
    cout << "Choose an option: ";
    cin >> opt;
    cin.ignore();

    switch(opt) {
      case 1:
        int day, month, year;
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
        cc.setDate(day, month, year);
        break;
      case 2:
        int hour, minute, second, PM;
        cout << "Enter time (hh mm ss PM): ";
        cin >> hour >> minute >> second >> PM;
        cc.setTime(hour, minute, second, PM);
        break;
      case 3:
        cc.readDate(day, month, year);
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        break;
      case 4:
        cc.readTime(hour, minute, second, PM);
        cout << "Time: " << hour << ":" << minute << ":" << second << " " << (PM ? "PM" : "AM") << endl;
        break;
      case 5:
        /*int steps;
        cout << "How many steps? ";
        cin >> steps;
        for(int i = 0; i < steps; i++) {
          cc.advance();
        }*/
        cc.advance();
        break;
      case 0:
        cout << "Exiting program\n";
        break;
      default:
        cout << "Invalid option\n";
    }
  }

  return 0;
}