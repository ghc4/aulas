// Código gerado pelo ChatGPT

#include <stdio.h>

int main() {
    int var = 10;           // Declarando uma variável inteira
    int *ponteiro;          // Declarando um ponteiro para um inteiro
    
    ponteiro = &var;        // Armazenando o endereço de 'var' no ponteiro
    
    // Exibindo o valor da variável 'var'
    printf("Valor de var: %d\n", var);
    
    // Exibindo o endereço de memória de 'var'
    printf("Endereco de var: %p\n", (void*)&var);
    
    // Exibindo o valor armazenado no ponteiro (endereço de 'var')
    printf("Valor armazenado em ponteiro (endereco de var): %p\n", (void*)ponteiro);
    
    // Exibindo o valor apontado pelo ponteiro (conteúdo de 'var')
    printf("Valor apontado por ponteiro (*ponteiro): %d\n", *ponteiro);
    
    // Modificando o valor de 'var' via ponteiro
    *ponteiro = 20;
    
    // Exibindo o novo valor de 'var' após modificação via ponteiro
    printf("Novo valor de var (apos modificacao via ponteiro): %d\n", var);
    
    return 0;
}
