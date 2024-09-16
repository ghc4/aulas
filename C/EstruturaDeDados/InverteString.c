#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100         // Define o tamanho máximo da string
int main() {
    char str[MAX_LENGTH];      // Array para armazenar a string
    char reversed[MAX_LENGTH]; // Array para armazenar a string invertida
    int length = 0;            // Comprimento atual da string
    // Instrução para o usuário
    printf("Digite uma string (pressione Enter para finalizar): ");
    // Lê os caracteres um por um até encontrar um '\n' ou até atingir o tamanho máximo
    while (length < MAX_LENGTH - 1) {
        // Lê um caractere
        int c = getchar();  
        // Se o caractere for uma nova linha, termine a leitura
        if (c == '\n') break;
        // Armazena o caractere no array e incrementa o comprimento
        str[length++] = (char)c;  
    }
    // Adiciona o terminador nulo ao final da string
    str[length] = '\0';  
    // Inverte a string
    int cnt=0;
    while(length>0) 
        reversed[cnt++] = str[--length];
    // Adiciona o terminador nulo ao final da string invertida
    reversed[cnt] = '\0';
    // Exibe a string invertida
    printf("String invertida: %s\n", reversed);
    return 0;
}
