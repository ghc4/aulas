#include <iostream>
#include <string>
using namespace std;
class Caixa {
    // Membros públicos
    public:
    	string nome;
        double comprimento;
        double profundidade;
        double altura;
        // Declaração do método dentro da definição da classe
        double volume() {
            return comprimento * profundidade * altura;
        }
        // Declaração para implementação fora da classe
        double base();
        Caixa(string n, double c, double p, double a);
        Caixa();
        void imprimeDados();
};

// Implementação do construtor 
Caixa::Caixa(string n, double c, double p, double a) {
    comprimento = c;
    profundidade = p;
    altura = a;
    nome = n;
}

// Implementação do construtor 
Caixa::Caixa() {
    comprimento = 0;
    profundidade = 0;
    altura = 0;
    nome = "Sem nome";
}

// Implementação do método
double Caixa::base() {
    return comprimento * profundidade;
}

// Implementação do método
void Caixa::imprimeDados() {
    printf("--------------------------------------------\n");
    printf("Nome...........: %s\n",    nome.c_str());
    printf("Comprimento....: %10.2lf\n", comprimento);
    printf("Profundidade...: %10.2lf\n", profundidade);
    printf("Altura.........: %10.2lf\n", altura);
    printf("Volume.........: %10.2lf\n", volume());
    printf("Base...........: %10.2lf\n", base());
    printf("--------------------------------------------\n");
}

// Código
int main() {
   Caixa caixaDeSapato("Caixa de sapato", 5.1, 4.2, 3.3123);  
   caixaDeSapato.imprimeDados();
   Caixa caixaVazia;
   caixaVazia.imprimeDados();
   return 0;
}

