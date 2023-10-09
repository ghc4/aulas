// vim: ts=4 sw=4 sts=4 et number : 
// chcp 65001; gcc 01_0_Completa.cpp && ./a.exe

#include <fstream>
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class CalculadoraFinanceira {
    public: 
        double pv = 0, fv = 0, pmt = 0, i = 0;
        int n = 0;
        void leitura(void);
        void valorFuturo(void);
        void price(void);
        void sac(void);
};

void CalculadoraFinanceira::leitura(void) {
    printf("Valor inicial (PV).............: "); scanf("%lf", &pv);
    printf("Valor do pagamento (PMT).......: "); scanf("%lf", &pmt);
    printf("Quantidade de períodos (N).....: "); scanf("%i", &n);
    printf("Taxa de juros (I)..............: "); scanf("%lf", &i);
    printf("Valor futuro (FV)..............: "); scanf("%lf", &fv);
    i /= 100;
}

void CalculadoraFinanceira::valorFuturo(void) {
    double resultado = pv;
    resultado  = pv*pow(1+i,n);
    resultado += (pmt * (pow(1+i,n)-1))/i;
    printf("Valor futuro: %.02lf\n", resultado);
}

void CalculadoraFinanceira::price(void) {
    double prestacao = 0;
    prestacao = pv*i*pow(1+i,n);
    prestacao /= pow(1+i,n)-1;
    printf("Prestação price: %.02lf\n", prestacao);
}

void CalculadoraFinanceira::sac(void) {
    for(int p=n; p>0; p--) {
        double juros = (((pv/n)*p)*i);
        double prestacao = (pv/n) + juros;
        printf("SAC Prestação: %3i - Valor: %10.02lf - Juros: %10.02lf\n", 1+(n-p), prestacao, juros);
    }
}

int main() {  
    setbuf(stdout, NULL);
    CalculadoraFinanceira calc;
    calc.leitura();
    calc.valorFuturo();
    calc.sac();
    calc.price();
    return 0;
}

