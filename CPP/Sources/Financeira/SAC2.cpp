#include <iostream>
using namespace std;
int main() {
    int n;
    double i, princ, pmt;
    i = 1;  princ = 100000;  n = 100;
    pmt = princ / n;
    while(n-- > 0) {
      	double juros = princ * (i/100);
        double pagamento = pmt + princ * (i/100);
        princ -= pmt;
        printf("\nPrinc: %10.02f", princ);
        printf("  Pmt..: %10.02f", pagamento);
        printf("  Juros: %10.02f", juros);
    }
    return 0;
}
