#include <iostream>
#include <string>
#include "Aluno.h"
#include "CadastroAlunos.h"

using namespace std;

bool CadastroAlunos::verificaMatricula(Aluno aluno[], int qtd, int matricula) {
  for(int i = 0; i < qtd; i++) {
    if(aluno[i].getMatricula() == matricula) {
      return true;
    }
  }

  return false;
}

void CadastroAlunos::cadastrarAluno() {
  if(qtdAlunos >= TURMA) {
    cout << "Turma cheia!\n";
    return;
  }

  string nome;
  string curso;
  int matricula;
  float nota1;
  float nota2;

  cout << "Digite o nome do(a) aluno(a): ";
  getline(cin, nome);

  cout << "Digite o nome do curso: ";
  getline(cin, curso);

  cout << "Digite a matrícula: ";
  cin >> matricula;

  if(verificaMatricula(aluno, qtdAlunos, matricula)) {
    cout << "Matricula ja cadastrada!\n";
    cin.ignore();
    return;
  }

  cout << "Digite a nota 1: ";
  cin >> nota1;

  cout << "Digite a nota 2: ";
  cin >> nota2;

  aluno[qtdAlunos].setNome(nome);
  aluno[qtdAlunos].setCurso(curso);
  aluno[qtdAlunos].setMatricula(matricula);
  aluno[qtdAlunos].setNotas(nota1, nota2);

  cout << "Aluno(a) cadastrado!\n";
  
  qtdAlunos++;

  cin.ignore();
}

void CadastroAlunos::consultarAluno() {
  bool found = false;
  
  string nome;

  cout << "Digite o nome do(a) aluno(a) a ser consultado: ";
  getline(cin, nome);
  for(int i = 0; i < qtdAlunos; i++){
    if(aluno[i].getNome() == nome) {
      cout << "Curso: " << aluno[i].getCurso() << endl;
      cout << "Matrícula: " << aluno[i].getMatricula() << endl;
      cout << "Nota da P1: " << aluno[i].getNota1() << endl;
      cout << "Nota da P2: " << aluno[i].getNota2() << endl;
      cout << "Média final: " << aluno[i].calculaMedia() << endl;

      found = true;
      break;
    }
  }

  if(!found) {
    cout << "Nome inválido!\n";
  }
}

void CadastroAlunos::listarAlunos() {
  for (int i = 0; i < qtdAlunos; i++) {
    cout << "---------------------" << endl;
    cout << "Aluno(a): " << aluno[i].getNome() << endl;
    cout << "Curso: " << aluno[i].getCurso() << endl;
    cout << "Matrícula: " << aluno[i].getMatricula() << endl;
    cout << "Nota 1: " << aluno[i].getNota1() << endl;
    cout << "Nota 2: " << aluno[i].getNota2() << endl;
    cout << "Média final: " << aluno[i].calculaMedia() << endl;
    cout << "\n";
  }
}

void CadastroAlunos::excluirAluno() {
  bool person = false; 

  int index = -1;

  string nome;

  cout << "Digite o nome do(a) aluno(a) a ser excluído";
  getline(cin, nome);

  for(int i = 0; i < qtdAlunos; i++) {
    if(aluno[i].getNome() == nome) {
      index = i;
      break;
    }
  }

  if(index == -1) {
    cout << "Aluno não encontrado!\n";
    return;
  }

  for (int i = index; i < (qtdAlunos-1); i++) {
    aluno[i] = aluno[i+1];
  }

  qtdAlunos--;

  cout << "Aluno excluído com sucesso!\n";
}

void CadastroAlunos::alterarAluno() {
  bool person = false; 

  int index;
  int opcao_param = -1;

  string nome;
  string curso;
  float nota1;
  float nota2;

  cout << "Digite o nome do(a) aluno(a) a ser consultado: ";
  getline(cin, nome);
  
  for(int i = 0; i < qtdAlunos; i++) {
    if(aluno[i].getNome() == nome) {
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
    cout << "2 - Alterar curso\n";
    cout << "3 - Alterar notas\n";
    cout << "0 - Sair\n";
    
    cin >> opcao_param;
    cin.ignore();

    switch(opcao_param) {
      case 1:
        cout << "Digite o nome a ser alterado: \n";
        getline(cin, nome);
        aluno[index].setNome(nome);
        cout << "Nome alterado\n";
        break;
      case 2:
        cout << "Digite o curso a ser alterado: \n";
        getline(cin, curso);
        aluno[index].setCurso(curso);
        cout << "Curso alterado\n";
        break;
      case 3:
        cout << "Digite as notas a serem alteradas: \n";
        cin >> nota1;
        cout << "Nota 1 alterada\n";
        cin >> nota2;
        cout << "Nota 2 alterada\n";
        aluno[index].setNotas(nota1, nota2);
        break;
      case 0:
        break;
      default:
        cout << "Opção invalida!\n";
        break;
    }  
  }
}