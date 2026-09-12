#include <iostream>
#include <string>

using namespace std;

#define TURMA 20

class Aluno {
  private: // sei que a classe é private por padrão mas só pra ficar bonitnho
    string nome;
    string curso;
    int matricula;
    float nota1;
    float nota2;
  public:
    void setNome(string newNome);
    void setCurso(string newCurso);
    void setMatricula(int newMatrucula);
    void setNotas(float newnNota1, float newNota2);
    string getNome();
    string getCurso();
    int getMatricula();
    float getNota1();
    float getNota2();
    float calculaMedia();
};

class CAGR {
  private:
    int qtdAlunos = 0;
  public:
    bool verificaMatricula(Aluno cadastro[], int qtd, int matricula); 
    void cadastrarAluno();
    void consultarAluno();
    void listarAlunos();
    void excluirAluno();
    void alterarAluno();
};

Aluno cadastro[TURMA];
CAGR cagr;

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

bool CAGR::verificaMatricula(Aluno cadastro[], int qtd, int matricula) {
  for(int i = 0; i < qtd; i++) {
    if(cadastro[i].getMatricula() == matricula) {
      return true;
    }
  }

  return false;
}

void CAGR::cadastrarAluno() {
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

  if(verificaMatricula(cadastro, qtdAlunos, matricula)) {
    cout << "Matricula ja cadastrada!\n";
    cin.ignore();
    return;
  }

  cout << "Digite a nota 1: ";
  cin >> nota1;

  cout << "Digite a nota 2: ";
  cin >> nota2;

  cadastro[qtdAlunos].setNome(nome);
  cadastro[qtdAlunos].setCurso(curso);
  cadastro[qtdAlunos].setMatricula(matricula);
  cadastro[qtdAlunos].setNotas(nota1, nota2);

  cout << "Aluno(a) cadastrado!\n";
  
  qtdAlunos++;

  cin.ignore();
}

void CAGR::consultarAluno() {
  bool found = false;
  
  string nome;

  cout << "Digite o nome do(a) aluno(a) a ser consultado: ";
  getline(cin, nome);
  for(int i = 0; i < qtdAlunos; i++){
    if(cadastro[i].getNome() == nome) {
      cout << "Curso: " << cadastro[i].getCurso() << endl;
      cout << "Matrícula: " << cadastro[i].getMatricula() << endl;
      cout << "Nota da P1: " << cadastro[i].getNota1() << endl;
      cout << "Nota da P2: " << cadastro[i].getNota2() << endl;
      cout << "Média final: " << cadastro[i].calculaMedia() << endl;

      found = true;
      break;
    }
  }

  if(!found) {
    cout << "Nome inválido!\n";
  }
}

void CAGR::listarAlunos() {
  for (int i = 0; i < qtdAlunos; i++) {
    cout << "---------------------" << endl;
    cout << "Aluno(a): " << cadastro[i].getNome() << endl;
    cout << "Curso: " << cadastro[i].getCurso() << endl;
    cout << "Matrícula: " << cadastro[i].getMatricula() << endl;
    cout << "Nota 1: " << cadastro[i].getNota1() << endl;
    cout << "Nota 2: " << cadastro[i].getNota2() << endl;
    cout << "Média final: " << cadastro[i].calculaMedia() << endl;
    cout << "\n";
  }
}

void CAGR::excluirAluno() {
  //IMPLEMENTAR
}

void CAGR::alterarAluno() {
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
    if(cadastro[i].getNome() == nome) {
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
        cadastro[index].setNome(nome);
        cout << "Nome alterado\n";
        break;
      case 2:
        cout << "Digite o curso a ser alterado: \n";
        getline(cin, curso);
        cadastro[index].setCurso(curso);
        cout << "Curso alterado\n";
        break;
      case 3:
        cout << "Digite as notas a serem alteradas: \n";
        cin >> nota1;
        cout << "Nota 1 alterada\n";
        cin >> nota2;
        cout << "Nota 2 alterada\n";
        cadastro[index].setNotas(nota1, nota2);
        break;
      case 0:
        break;
      default:
        cout << "Opção invalida!\n";
        break;
    }  
  }
}
