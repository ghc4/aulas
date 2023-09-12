#include <iostream>
#include <string>
using namespace std;
class Pessoas {
  public:
    int id, idade;
    string nome, cpf;
    void printa();
    Pessoas();
    ~Pessoas();
    Pessoas(int pId, string pNome, string pCpf, int pIdade);
};
void Pessoas::printa() {
  printf("\nID............: %8d", id);
  printf("\nNome..........: %s",  nome.c_str());
  printf("\nCPF...........: %s",  cpf.c_str());
  printf("\nIdade.........: %3d", idade);
}
Pessoas::Pessoas() {
  printf("\nClasse Pessoas instanciada!");
}
Pessoas::~Pessoas() {
  printf("\nObjeto %s destruido!", nome.c_str());
}
Pessoas::Pessoas(int pId, string pNome, string pCpf, int pIdade) {
  id = pId;
  nome = pNome;
  cpf = pCpf;
  idade = pIdade;
  printf("\nClasse Pessoas instanciada com args!");
}
int main() { 
  Pessoas *joao = new Pessoas(1, "Joao", "12312312387", 22);
  joao->printa();
  delete joao;
  return 0;
}


