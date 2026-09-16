#include <iostream>
#include <string>
#include "cadastroturma/CadastroAlunos.h"
#include "clockcalendar/ClockCalendar.h"
#include "cadastroturma/CadastroProfessores.h"
#include "cadastroturma/menu.h"
#include "cadastroturma/LoginLogout.h"

using namespace std;

int main() {
  while(true) {
    
  }

  return 0;
}

/*
int main() {

  switch(opt) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      cadastroalunos.cadastrarAluno();
      break;
    case 4:
      cadastroalunos.consultarAluno();
      break;
    case 5:
      cadastroalunos.listarAlunos();
      break;
    case 6:
      cadastroalunos.excluirAluno();
      break;
    case 7:
      cadastroalunos.alterarAluno();
      break;
    case 8:
      cadastroprofessores.cadastrarProfessor();
      break;
    case 9:
      cadastroprofessores.consultarProfessor();
      break;
    case 10:
      cadastroprofessores.listarProfessor();
      break;
    case 11:
      cadastroprofessores.excluirProfessor();
      break;
    case 12:
      cadastroprofessores.alterarProfessor();
      break;
    default:
      break;
  }

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
        int steps;
        cout << "How many steps? ";
        cin >> steps;
        for(int i = 0; i < steps; i++) {
          cc.advance();
        }
        cc.advance();
        break;
      case 0:
        cout << "Exiting program\n";
        break;
      default:
        cout << "Invalid option\n";
    }
  
  return 0;
}*/