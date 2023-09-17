#include <iostream>
#include <string>
using namespace std;
class PessoasFisicas {
  public:
    int id, idade;
    string nome, cpf;
    void printa();
    PessoasFisicas();
    ~PessoasFisicas();
    PessoasFisicas(int pId, string pNome, string pCpf, int pIdade);
};
void PessoasFisicas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nCPF...........: %s",  cpf.c_str());
  printf("\nIdade.........: %3d", idade);
}
PessoasFisicas::PessoasFisicas() {
  printf("\nClasse Pessoas instanciada!");
}
PessoasFisicas::~PessoasFisicas() {
  printf("\nObjeto %s destruido!", nome.c_str());
}
PessoasFisicas::PessoasFisicas(int pId, string pNome, string pCpf, int pIdade) {
  id = pId;
  nome = pNome;
  cpf = pCpf;
  idade = pIdade;
  printf("\nClasse Pessoas instanciada com args!");
}
class PessoasJuridicas {
  public:
    int id, idade;
    string nome, cnpj;
    void printa();
    PessoasJuridicas();
    ~PessoasJuridicas();
    PessoasJuridicas(int pId, string pNome, string pCnpj, int pIdade);
};
void PessoasJuridicas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nCPF...........: %s",  cnpj.c_str());
  printf("\nIdade.........: %3d", idade);
}
PessoasJuridicas::PessoasJuridicas() {
  printf("\nClasse Pessoas instanciada!");
}
PessoasJuridicas::~PessoasJuridicas() {
  printf("\nObjeto %s destruido!", nome.c_str());
}
PessoasJuridicas::PessoasJuridicas(int pId, string pNome, string pCnpj, int pIdade) {
  id = pId;
  nome = pNome;
  cnpj = pCnpj;
  idade = pIdade;
  printf("\nClasse Pessoas instanciada com args!");
}
int main() { 
  PessoasFisicas *joao = new PessoasFisicas(1, "Joao", "12312312387", 22);
  joao->printa();
  delete joao;
  PessoasJuridicas *loja = new PessoasJuridicas(1, "Loja", "12123123000112", 22);
  joao->printa();
  delete loja;
  return 0;
}

