#include <iostream>
using namespace std;
int main() {
  double PV, I, PMT;
  int N;
  I=1;
  PV=100000;
  N=100;
  PMT=PV/N;
  printf("\nAmortização: %10.02lf ", PMT);
  while(N-- > 0) {
    printf("\nJuros: %10.02lf ", PV * (I/100));
    printf("  Parcela: %10.02lf ", PMT + PV * (I/100));
    printf("  Saldo: %10.02lf ", PV);
    PV -= PMT;
  }
  return 0;
}
