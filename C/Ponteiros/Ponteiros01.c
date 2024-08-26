#include <stdio.h>
int main() {
    int* p;                 // Cria ponteiro p
    int t = 10;             // Cria variável t
    p = &t;                 // Aponta p para endereço de t
    printf("%i\n", *p);     // Imprime valor do alvo de p
    printf("%p\n", p);      // Imprime endereço do alvo de p
    printf("%i\n", t);      // Imprime valor de t
    printf("%p\n", &t);     // Imprime endereço de t
    return 0;
}
