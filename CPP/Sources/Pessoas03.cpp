#include <iostream>
#include <string>
using namespace std;
class Pessoas {
  public:
    int id;
    string nome, email;
    Pessoas();
    ~Pessoas();
    void printa();
};
Pessoas::Pessoas() {
  printf("\nClasse Pessoas instanciada!");
}
Pessoas::~Pessoas() {
  printf("\nObjeto %s destruido!", nome.c_str());
}
void Pessoas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nE-mail........: %s",  email.c_str());
}
class PessoasFisicas : public Pessoas {
  public:
    string cpf;
    void printa();
};
void PessoasFisicas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nE-mail........: %s",  email.c_str());
  printf("\nCPF...........: %s",  cpf.c_str());
}
class PessoasJuridicas : public Pessoas {
  public:
    string cnpj;
    void printa();
};
void PessoasJuridicas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nE-mail........: %s",  email.c_str());
  printf("\nCNPJ..........: %s",  cnpj.c_str());
}
int main() { 
  PessoasFisicas *joao = new PessoasFisicas();
  joao->id = 1;
  joao->nome = "Joao";
  joao->email = "joao@gmail.com";
  joao->cpf = "1231231287";
  joao->printa();
  delete joao;
  PessoasJuridicas *loja = new PessoasJuridicas();
  loja->id = 2;
  loja->nome = "Rouparia";
  loja->email = "rouparia@gmail.com";
  loja->cnpj = "12123123000112";
  loja->printa();
  delete loja;
  return 0;
}

