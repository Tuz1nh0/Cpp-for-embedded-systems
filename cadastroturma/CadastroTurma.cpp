#include <iostream>
#include <string>
#include "Aluno.h"
#include "Cadastro.h"

using namespace std;

int main() {
  int opcao = -1;
  
  while (opcao != 0) {
    cout << "\n===== MENU =====\n";
    cout << "1 - Cadastrar aluno\n";
    cout << "2 - Consultar aluno \n";
    cout << "3 - Listar alunos\n";
    cout << "4 - Excluir aluno\n";
    cout << "5 - Alterar aluno\n";
    cout << "0 - Sair\n";

    cin >> opcao;
    cin.ignore();
    switch(opcao) {
      case 1:
        cagr.cadastrarAluno();
        break;
      case 2:
        cagr.consultarAluno();
        break;
      case 3:
        cagr.listarAlunos();
        break;
      case 4:
        cagr.excluirAluno();
        break;
      case 5:
        cagr.alterarAluno();
        break;
      case 0:
        cout << "Encerrando o programa\n";
        break;
      default:
        break;
    }
  }

  return 0;
}