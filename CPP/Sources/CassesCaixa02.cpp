#include <iostream>
#include <string>
using namespace std;
class Caixa {
  public:
    double comprimento, profundidade, altura;
    string nome;
    void printa();
    Caixa();
    ~Caixa();
    Caixa(string pNome, double pComprimento, double pProfundidade, double pAltura);
    void printaVolume();
};
void Caixa::printa() {
  printf("\nNome..........: %s", nome.c_str());
  printf("\nComprimento...: %8.02lf", comprimento);
  printf("\nProfundidade..: %8.02lf", profundidade);
  printf("\nAltura........: %8.02lf", altura);
}
void Caixa::printaVolume() {
  double volume = comprimento * profundidade * altura;
  printf("\nVolume........: %8.02lf", volume); 
}
Caixa::Caixa() {
  comprimento = 0;
  profundidade = 0;
  altura = 0;
  printf("\nClasse Caixa instanciada sem args!");
}
Caixa::Caixa(string pNome, double pComprimento, double pProfundidade, double pAltura) {
  nome = pNome;
  comprimento = pComprimento;
  profundidade = pProfundidade;
  altura = pAltura;
  printf("\nClasse Caixa instanciada com args!");
}
Caixa::~Caixa() {
  printf("\nClasse Caixa destruida!");
}
int main() { 
  Caixa *c1 = new Caixa("joias", 15, 10, 5);
  c1->printa();
  c1->printaVolume();
  delete c1;
  Caixa caixaDeSapatos("sapatos", 40, 25, 15);
  caixaDeSapatos.printa();
  Caixa caixaDeCigarros;
  caixaDeCigarros.nome = "cigarros";
  caixaDeCigarros.comprimento = 15;
  caixaDeCigarros.profundidade = 7.5;
  caixaDeCigarros.altura = 5;
  caixaDeCigarros.printa();
  return 0;
}
