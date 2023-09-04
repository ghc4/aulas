#include <iostream>
using namespace std;
// Classe
class Caixa {
    // Membros públicos
    public:
        double comprimento = 0.0;
        double profundidade = 0.0;
        double altura = 0.0;
        // Declaração do método dentro da definição da classe
        double volume() {
            return comprimento * profundidade * altura;
        }
        // Declaração para implementação fora da classe
        double base();
};
// Implementação de método
double Caixa::base() {
    return comprimento * profundidade;
}
int main() {
   Caixa c;          
   c.altura = 5.0; 
   c.comprimento = 6.0; 
   c.profundidade = 7.0;
   cout << c.volume() <<endl;
   cout << c.base() <<endl;
   return 0;
}
