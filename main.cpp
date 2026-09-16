#include <iostream>
#include <string>
#include "cadastroturma/CadastroAlunos.h"
#include "clockcalendar/ClockCalendar.h"
#include "cadastroturma/CadastroProfessores.h"
#include "cadastroturma/menu.h"
#include "cadastroturma/LoginLogout.h"

using namespace std;

int main() {
  LoginLogout auth(cadastroprofessores);

  while(true) {
    menu.showCadastroTurma(auth.verifyLogged(), cadastroprofessores.getQtdProfessores() > 0);

    int opt = menu.readOpt();

    switch(opt) {
      case 1:
        break;
      case 2:
        auth.logout();
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
  }

  return 0;
}