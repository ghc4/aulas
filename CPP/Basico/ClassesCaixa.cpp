#include <iostream>
using namespace std;
class Caixa {
  public:
    double comprimento, profundidade, altura;
    void printa();
    Caixa();
    Caixa(double pComprimento, double pProfundidade, double pAltura);
    void printaVolume();
};
void Caixa::printa() {
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
Caixa::Caixa(double pComprimento, double pProfundidade, double pAltura) {
  comprimento = pComprimento;
  profundidade = pProfundidade;
  altura = pAltura;
  printf("\nClasse Caixa instanciada com args!");
}
int main() { 
  Caixa caixaDeJoias(15, 10, 5);
  caixaDeJoias.printa();
  caixaDeJoias.printaVolume();
  Caixa caixaDeSapatos(40, 25, 15);
  caixaDeSapatos.printa();
  Caixa caixaDeCigarros;
  caixaDeCigarros.comprimento = 15;
  caixaDeCigarros.profundidade = 7.5;
  caixaDeCigarros.altura = 5;
  caixaDeCigarros.printa();
  return 0;
}
